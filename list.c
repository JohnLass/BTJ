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
	if(cp==NULL)
		return -1;
	cp->next = front;
	front=cp;
	return 0;
}
	
	
car_t *lget() {
	car_t *fp;
	if(front==NULL) 
		return NULL;
	fp=front;
	front = fp->next;
	return fp;
}

void lapply(void (*fn)(car_t *cp)) {
	car_t *incp=NULL;
	for(incp=front; incp!=NULL; incp= incp->next){
		fn(incp);
	}
	return;
}

car_t *lremove(char *platep) {
	car_t *incp=NULL;
	car_t *fp=NULL;
	car_t *prevp=front;
	int ret=0;
	int count=0;
	int loop_count = 0;
	
	if(platep!=NULL){
		for(incp=front; incp!=NULL; incp=incp->next){
			ret=strcmp(incp->plate,platep);
			if((ret==0)) {
				fp = incp;
				count = count + 1;
				if(loop_count == 0){
					front = front->next;
				}else{
					prevp->next = incp->next;
				}
			}
			if(count==0){
				prevp = incp;
			}
			loop_count = loop_count + 1;
		}
	}else{
		printf("Invalid arg");
		return NULL;
	}
	if((count==0)){
		printf("Plate not found in list");
		return NULL;
	}
	return fp;
}
