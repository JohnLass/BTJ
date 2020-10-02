/* listtest1.c --- 
 * 
 * 
 * Author: John J. Lass
 * Created: Thu Oct  1 18:39:22 2020 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */

#include "list.h"
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>
#include "listfun.h"

int main(void){

	car_t *car1=makecar("ABC123",200000,2020);
	int32_t flag;

	/*	listinit();*/
 
	/*	car1.next=NULL;

	
	strcpy(car1.plate,"ABC123");
	car1.price=200000;
	car1.year=20;
	*/		
	flag=lput(car1);
	free(car1);
	
	if(flag==0){
		printf("%i",flag);
		exit(EXIT_SUCCESS);
			}else{
		exit(EXIT_FAILURE);
			}

}
