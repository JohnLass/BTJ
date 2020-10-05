/* remove_test2.c --- tests lremove by removing from the middle
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Sat Oct  3 16:37:28 2020 (-0400)
 * Version: 
 * 
 * Description: makes list of three, removes from the middle and checks that it worked
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "listfun.h"


int main(void){
	car_t * firstp = makecar("abcde",20.20,3030);
	car_t * secondp = makecar("p",204.2,30);
	car_t * lastp = makecar("GDX",2.340,300);
	car_t * testp = NULL;

	lput(lastp);
	lput(secondp);
	lput(firstp);

	//remove from middle
	testp = lremove("p");

	//check to make sure it returned correct entry
	if(!checkcar(testp,"p",204.2,30)){
		printf("Failure");
		exit(EXIT_FAILURE);
	}
	free(testp);
 

	//now check that the order is correct by lget() twice and should be first pointer, than the last pointer
	testp = lget();

	//check to make sure it is first pointer
	if(!checkcar(testp,"abcde",20.20,3030)){
		printf("Failure");
		exit(EXIT_FAILURE);
	}
	free(testp);

	//check to make sure it skips to last now
	testp = lget();

	//make sure test pointer is now last
	if(!checkcar(testp,"GDX",2.340,300)){
		printf("Failure");
		exit(EXIT_FAILURE);
	}
	free(testp);
	//If it gets here program worked
	exit(EXIT_SUCCESS);
}
