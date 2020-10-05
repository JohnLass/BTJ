/* remove_test1.c --- tests whether lremove() works for a nonempty list at the begining
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Sat Oct  3 15:02:45 2020 (-0400)
 * Version: 
 * 
 * Description: makes a list, removes the first item, checks to make sure it works properly 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "listfun.h"

int main(void){
	car_t * firstp = makecar("8008135", 60.4, 2020);
	car_t * secondp = makecar("p", 6020.2, 2003);
	car_t * lastp = makecar("rfc47", 3932.9, 20120);
	car_t * testp;

	lput(lastp);
	lput(secondp);
	lput(firstp);
	
	testp = lremove("8008135");	
	//make sure that test pointer matches datat that was in the first list item
	if(!checkcar(testp,"8008135", 60.4, 2020)){
		printf("Failure");
		exit(EXIT_FAILURE);
	}
	free(testp);
	//Call lget, to make sure that the first thing actually got removed
	testp = lget();
	//Check to make sure that testp now  matches second entry data
	if(!checkcar(testp,"p",6020.2,2003)){
		printf("Failure");
		exit(EXIT_FAILURE);
	}
	free(testp);
	
	//try removing something that isnt there
	testp = lremove("hahalmao");
	if(testp != NULL){
		printf("Failure");
		exit(EXIT_FAILURE);
	}
	
	//try removing the last one
	testp = lremove("rfc47");
	
	if(!(checkcar(testp,"rfc47", 3932.9, 20120))){
		printf("Failure");
		exit(EXIT_FAILURE);
	}
	free(testp);
	
	exit(EXIT_SUCCESS);
	
}
