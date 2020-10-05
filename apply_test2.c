/* apply_test2.c --- tests lapply() on a non-empty list
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Sun Oct  4 14:21:51 2020 (-0400)
 * Version: 
 * 
 * Description:  Checks to see if it will lapply the print node function to the list
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "listfun.h"

int main(void){
	car_t * firstp = makecar("8008135", 60.4, 2020);
	car_t * secondp = makecar("p", 6020.2, 2003);
	car_t * lastp = makecar("rfc47", 3932.9, 20120);
	void (*fn)(car_t *cp);

	lput(lastp);
	lput(secondp);
	lput(firstp);

	//define fn as print_node and run lapply
	fn = print_node;	
	lapply(fn);

	free(firstp);
	free(secondp);
	free(lastp);
	exit(EXIT_SUCCESS);
}
