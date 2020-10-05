/* remove_test1.c --- tests whether lremove() works for a nonempty list at the begining
 * 
 * 
 * Author: Tyler Neath
 * Created: Sat Oct  10 14:02:30 2020 
 * Version: 
 * 
 * Description: intitializes an empty list and try to remove from it
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "listfun.h"

int main(void){
	car_t *testp = lremove("NULL_CAR");

	if(testp != NULL){
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
