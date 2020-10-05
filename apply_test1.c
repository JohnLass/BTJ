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
	car_t *front = makecar("rfc3939", 60.7, 2010);
	car_t *bad = NULL;
	void (*fn)(car_t *cp);
	
	print_node(front);
	print_node(bad);
	fn = print_node;
 
	lapply(fn);

	free(front);
	free(bad);
	exit(EXIT_SUCCESS);

}
