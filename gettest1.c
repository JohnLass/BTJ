/* gettest1.c --- test getting from an empty list
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Fri Oct  2 13:43:40 2020 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "list.h"
#include "listfun.h"

int main(void){
	car_t *tp;
	make_list();	
	
	tp = lget();

	
	if(!(checkcar(tp,"8008135", 60.4, 2020))) {
		printf("Failure");
		exit(EXIT_FAILURE);
	}
	free(tp);
	tp = lget();
	
	if(!(checkcar(tp,"p", 6020.2, 2003))) {
		printf("Failure");
		exit(EXIT_FAILURE);
	}

	free(tp);
	tp = lget();
	
	if(!(checkcar(tp,"rfc47", 3932.9, 20120))) {
		printf("Failure");
		exit(EXIT_FAILURE);
	}
	
	free(tp);
	exit(EXIT_SUCCESS);
}
