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
	bool carstat1, carstat2;
	car_t *p1, *p2, *lp, *tp;
		
	p1 = makecar("828393", 800.5, 2005);
	p2 = makecar("GOOSE", 700.5, 2015);
	lp = makecar("last1", 600.5, 2005);
	
	lput(lastp);
	lput(secondp);
	lput(firstp);

	testp = lget();

	printf("this is testp->price: %lf\n", testp->price);
	printf("this is firstp->price: %lf\n", firstp->price);

	if((checkcar(testp,"828393", 800.5, 2005))==FALSE) {
		printf("Failure");
		exit(EXIT_FAILURE);
	}
	
	
	testp = lget();
carstat2 = 
	free(lastp);
	free(testp);
	
	//if nothing has triggered a failure by now than it worked properly
	exit(EXIT_SUCCESS);


}
