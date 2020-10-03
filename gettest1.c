/* gettest1.c --- test getting from an empty list
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Fri Oct  2 13:43:40 2020 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <list.h>

int main(void){

	//initialize variables
	int rtrn = 0;
	car_t *firstp = (car_t *) malloc(sizeof(car_t));
	car_t *secondp = (car_t *) malloc(sizeof(car_t));
	car_t *lastp = (car_t *) malloc(sizeof(car_t));
	car_t *testp = (car_t *) malloc(sizeof(car_t));

	//initialize the cars with data
	firstp->next = NULL;
	strcpy(firstp->plate,"828393");
	firstp->price = 800.5;
	firstp->year = 2005;
	

	secondp->next = NULL;
	strcpy(secondp->plate,"GOOSE");
	secondp->price = 700.5;
	secondp->year = 2105;
	
	lastp->next = NULL;
	strcpy(lastp->plate,"last1");
	lastp->price = 600.5;
	lastp->year = 2015;

	//Link items in list together
	firstp->next = &secondp;
	secondp->next = &lastp;


	//run test to see if we can get the first car (and delete it)
	
	testp = get();


	//check to make sure data in test pointer is correct (matches the first pointer in the list)

	
	if(testp->price != firstp->price){
		exit(EXIT_FAILURE);
	}

	if(strcmp(testp->plate,firstp->plate) != 0){
		exit(EXIT_FAILURE);
	}

	if(testp->next != &secondp){
		exit(EXIT_FAILURE);
	}
	

	//run it again and make sure it now has data for second pointer

	testp = get();


	// check test pointer data to make sure it has second pointer's data now

	if(testp->price != secondp->price){
		exit(EXIT_FAILURE);
	}

	if(strcmp(testp->plate,secondp->plate) != 0){
		exit(EXIT_FAILURE);
	}

	if(testp->next != &lastp){
		exit(EXIT_FAILURE);
	}

	//if nothing has triggered a failure by now than it worked properly
	exit(EXIT_SUCCESS);


}
