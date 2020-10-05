/* remove_test4.c --- tests removing form a non-empty list at the end
 * 
 * 
 * Author: Tyler Neath
 * Created: Sat Oct  3 10 53:30 2020
 * Version: 
 * 
 * Description: creates a non-empty list and test functionality in removing from the end 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "listfun.h"

int main(void){
	make_list();
	car_t *flagp;

	flagp = lremove("rfc47");
	
	if(!(checkcar(flagp,"rfc47", 3932.9, 20120))){
		printf("Failure\n");
		exit(EXIT_FAILURE);
	}
	flagp = lremove("rfc47");
	if(flagp!=NULL){
		printf("Failure\n");
		exit(EXIT_FAILURE);
	}
     
	flagp = lremove("NOT VALID DUDE");
	if(flagp != NULL){
		printf("Failure\n");
		exit(EXIT_FAILURE);
	}

	free(flagp);
	printf("Success\n");
	exit(EXIT_SUCCESS);
	
}
