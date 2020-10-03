/* gettest2.c --- tests if lget works when calling an empty list
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Sat Oct  3 14:53:27 2020 (-0400)
 * Version: 
 * 
 * Description: Calls lget when the list is empty, exits success if null exits fail if something else
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void){

	car_t *testp = (car_t *) malloc(sizeof(car_t));


	testp = lget();

	if (testp == NULL){
		exit(EXIT_SUCCESS);
	}
	
	exit(EXIT_FAILURE);
	

}
