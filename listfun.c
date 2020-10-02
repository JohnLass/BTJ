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
 car_t *makecar(char*platep,double price,int year) {

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
	
