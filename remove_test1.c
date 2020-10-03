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

	
	// Initialize three pointers for list and one tester
	car_t * firstp = makecar("8008135", 60.4, 2020);
	car_t * secondp = makecar("p", 6020.2, 2003);
	car_t * lastp = makecar("rfc47", 3932.9, 20120);
	car_t * testp = (car_t *) malloc(sizeof(car_t));

	//Make a 3 car list in the correct order
	lput(lastp);
	lput(secondp);
	lput(firstp);

	//assign the first car to be removed and put in test pointer
	testp = lremove("8008135");


	
	//make sure that test pointer matches datat that was in the first list item
	if(strcmp(testp->plate,"8008135") != 0){
		exit(EXIT_FAILURE);
	}
	if(testp->price != 60.4){
		exit(EXIT_FAILURE);
	}

	//Call lget, to make sure that the first thing actually got removed
	testp = lget();


	//Check to make sure that testp now  matches second entry data
	if(strcmp(testp->plate,"p") != 0){
		exit(EXIT_FAILURE);
	}
	if(testp->price != 6020.2){
		exit(EXIT_FAILURE);
	}

	//try removing something that isnt there
	testp = lremove("hahalmao");

	//should be null if the plate didnt exist
	if(testp != NULL){
		exit(EXIT_FAILURE);
	}



	//if it got to here it was a successful test
	exit(EXIT_SUCCESS);
	
}
