/* apply_test1.c --- Tests whether lapply works on an empty list
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Sun Oct  4 12:46:51 2020 (-0400)
 * Version: 
 * 
 * Description: Calls lapply on an empty list and checks whether it returns null
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "listfun.h"


int main(void){

	//initialize a car, a null car, something to take the return value and a function pointer
	car_t *front = makecar("rfc3939", 60.7, 2010);
	//	int rtrn;
	car_t *bad = NULL;
	void (*fn)(car_t *cp);
	
	//first check to make sure print node works
	//print a node that sould print
	print_node(front);

	//call printnode on an empty node
	print_node(bad);

	

	//check to see if lapply() works when called on an empty list
	//assign print node to function pointer
	fn = print_node;
 
	lapply(fn);

	//if it gets here than exit successfully
	exit(EXIT_SUCCESS);


}
