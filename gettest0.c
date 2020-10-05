/* gettest0.c --- 
 * 
 * 
 * Author: John J. Lass
 * Created: Mon Oct  5 13:18:04 2020 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "listfun.h"

int main(void){
	car_t *p1,*p2;

	p1 = makecar("123456", 8800.5, 2015);
	lput(p1);
	p2 = lget();
	if(!checkcar(p2,"123456", 8800.5, 2015)){
		printf("Failure\n");
		exit(EXIT_FAILURE);
	}
	printf("Success\n");
	free(p2);
	exit(EXIT_SUCCESS);
}
	
