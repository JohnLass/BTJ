/* make_list_test.c --- Tests whether make_list works
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Sun Oct  4 14:50:31 2020 (-0400)
 * Version: 
 * 
 * Description: Makes a list with make_list and makes sure it works
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "listfun.h"

int main(void){

	//	int i=0;
	//car_t *pp=NULL;
	make_list();

 	print_node(lget());
 	print_node(lget());

	lget();


	
	
	exit(EXIT_SUCCESS);
	
}
