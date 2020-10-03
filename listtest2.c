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

#include "list.h"
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>
#include "listfun.h"


int main(void){   
                                                                                                                                                                                 
	car_t *car1=makecar("1234",200.00,2018);
    car_t *car2=makecar("5689",210.00,2020);

    // Boolean value flags to check each subsequent entry
	int32_t flag1, flag2;
    flag1=lput(car1);
    flag2=lput(car2);

    free(car1);
    free(car1);

    if( (flag1==0) && (flag2==0) ){
    printf("First flag: %i, Second flag: %i\n",flag1,flag2);
    exit(EXIT_SUCCESS);
        }else{
    exit(EXIT_FAILURE);
        }

}
