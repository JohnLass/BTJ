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
		front=cp;
		return 0;

	}

}
	
	
car_t *lget()  {

	car_t *fp;
	
	if(front==NULL) {

		printf("List is empty \n");
		return NULL;

	}else if(front!=NULL) {

		fp=front; 
		front = front->next;
		return fp;
			
			}else{

		printf("Error using function 'get()'\n");
		return NULL;

	}
	
}

void lapply(void (*fn)(car_t *cp)) {

	car_t *incp=NULL;

	for(incp=front; incp!=NULL; incp= incp->next){

		fn(incp);

	}

}

car_t *lremove(char *platep) {

	car_t *incp=NULL;
	car_t *fp=NULL;
	int ret=0;
	int count=0;
	
	if(platep!=NULL){
		
		for(incp=front; incp!=NULL; incp=incp->next){
		 
			ret=strcmp(incp->plate,platep);
			
			if((ret=0)) {

				fp->next=incp->next;
				count = count + 1;

			}
			
			fp = incp;

		}

	}else{
		
		printf("Invalid arg");
		return NULL;

	}

	if((count=0)){
		return NULL;
	}

	return fp;
	
}
