/* list.c --- 
 * 
 * 
 * Author: John J. Lass, Robert Carangelo, Tyler Neath
 * Created: Thu Oct  1 18:06:18 2020 (-0400)
 * Version: 
 * 
 * Description: Functions to manipulate list of cars
 * 
 */
#include "list.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "listfun.h"

static car_t *front=NULL; 
// 2 cases; 1 cp is null , we don't care wht happens and we leave
// the other case: cp! = NULL and we want to add it  to the list
// adding to list: if front is null or already something there
int32_t lput(car_t *cp) {

	if(cp==NULL){
		
		return -1;

	}else{
		cp->next = front;
		cp = front;
		return 0;
	}
}
	
	
car_t *lget()  {

	car_t *fp=NULL;
	/*int index=0;*/
	
	front->next=fp;
	
	if(fp==NULL) {

		printf("List is empty \n");
		return NULL;

	}else if(fp!=NULL) {

		return fp;
		fp=front;
			
			}else{

		printf("Error using function 'get()'\n");
		return NULL;

	}
	
}
