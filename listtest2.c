/*  test1.c ---                                                                                                                      
 *                                                                                                                                             
 *                                                                                                                                             
 * Author: Tyler I. Neath                                                                                                                      
 * Created: Tue Sep 29 03:47:20 2020 (-0400)                                                                                                   
 * Version:                                                                                                                                    
 *                                                                                                                                             
 * Description: Test functionality with non-empty lists                                                                                                        
 *                                                                                                                                             
 */  

#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "listfun.h"

int main(void){   
	car_t *carp=makecar("5689",210.00,2020);
	car_t *carp2=makecar("5689",210.00,2020);
	int32_t flag1=lput(carp);
	int32_t flag2=lput(carp2);

    if( (flag1==0) && (flag2==0) ){
			printf("Success");
			free(carp);
			free(carp2);
			exit(EXIT_SUCCESS);
		}else{
			printf("Failure");
			exit(EXIT_FAILURE);
		}
}
