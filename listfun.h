/* listfun.h --- 
 * 
 * 
 * Author: John J. Lass
 * Created: Fri Oct  2 12:56:59 2020 (-0400)
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


/*Initializes the list by making front->next point to NULL*/
void listinit();



/*Used to allocate memory and add values to a new list entry*/
car_t *makecar(char*platep,double price,int year);



/*Shifts all list entries and adds a new entry to the beginning of the list*/
car_t *shadd();
	