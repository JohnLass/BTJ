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

int32_t lput(car_t *cp) {

	car_t *pp=NULL;
	
	if(front->next==NULL) {
		printf("flag\n");
		front->next=cp;

	}else{

		pp=front->next;
		cp->next=pp;
		front->next=cp;

	}

	if(cp==NULL){
		
		return 1;

	}else{

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
