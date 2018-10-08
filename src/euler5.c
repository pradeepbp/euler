/*
	projecteuler.net; problem no: 5
	A very inefficient implementation

*/

#include <stdio.h>


int main(void){
	
	long number = 0;
	int flag = 1;	
	printf("Calculating...\n");
	while(flag == 1){
		number += 20;
		for(int div = 2; div <= 19; div ++){
			if(number % div != 0){
				//printf("%ld %d\n", number, div);
				flag = 1;
				break;	
			}
			else{
				flag = -1;
								
			}
		}
		
	}
	
	printf("Done...%ld\n", number);

}
