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

	
	// Initializing cars for non-empty list
	car_t *car1 = makecar("3040 FF", 20000.23, 1997);
	car_t *car2 = makecar("8976 GH", 30000.23, 2008);
	car_t *car3 = makecar("34245 FW", 402042.23, 2010);
	car_t *flagp = (car_t *) malloc(sizeof(car_t));

	// Creating car list
	lput(car3);
	lput(car2);
	lput(car1);

	//removing the last car entry
	flagp = lremove("34245 FW");
	
	//ensures that car removed matches correct argument
	if(strcmp(flagp->plate,"34245 FW") != 0){
		exit(EXIT_FAILURE);
	}
	if(flagp->price != 402042.23){
		exit(EXIT_FAILURE);
	}
    if(flagp->year != 2010){
        exit(EXIT_FAILURE);
    }

 

	//confirm removal using lget
	flagp = lget();

    //confirm pointer is not null
    if(flagp==NULL){
        exit(EXIT_FAILURE);
    }
    
	//Check to make sure that flagp now matches first entry data
	if(strcmp(flagp->plate,"3040 FF") != 0){
		exit(EXIT_FAILURE);
	}

	//removing a non-valid entry
	flagp = lremove("NOT VALID DUDE");
	if(flagp != NULL){
		exit(EXIT_FAILURE);
	}

    free(flagp);

	exit(EXIT_SUCCESS);
	
}
