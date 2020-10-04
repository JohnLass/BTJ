/* listfun.c --- 
 * 
 * 
 * Author: John J. Lass
 * Created: Fri Oct  2 14:29:12 2020 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */



#include "list.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
/* void listinit(){

	 front->next=NULL;

 }
*/
 car_t * makecar(char*platep,double price,int year) {

	 car_t *cp=NULL;

	 if(!(cp = (car_t*)malloc(sizeof(car_t)))) {

		 printf("[Error: malloc failed allocating car]\n");
		 return NULL;

	 }

	 cp->next = NULL;
	 strcpy(cp->plate,platep);
	 cp->price=price;
	 cp->year=year;
	 printf("Car created\n");
	 return cp;

 }



car_t *shadd() {

	car_t *beg=NULL;
	
	return beg;

}
	

//function that takes a pointer to an entry and prints its data
//does not return anything
void print_node(car_t *cp){

	//checks whether it was passed a null pointer
	if(cp == NULL){
		printf("passed a null pointer\n");
	 
	}else{

		//prints the node
		printf("The car's licence plate is: %s\n", cp->plate);
		printf("The car's price is: %lf\n", cp->price);
		printf("The car's year is: %d\n", cp->year);
		
		
	}

	return;
}


//makes a three car list for testing purposes
void make_list(void){

	//make three pointers to cars
	car_t * firstp = makecar("8008135", 60.4, 2020);
	car_t * secondp = makecar("p", 6020.2, 2003);
	car_t * lastp = makecar("rfc47", 3932.9, 20120);


	//Make a 3 car list in the correct order
	lput(lastp);
	lput(secondp);
	lput(firstp);

	return;
}
