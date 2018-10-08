/*
	projecteuler.net; problem no: 5


*/

#include <stdio.h>


int main(void){
	
	long number = 0;
	int flag = 1;	
	while(flag == 1){
		number += 20;
		for(int div = 1; div <= 20; div ++){
			if(number % div != 0){
				printf("%ld %d\n", number, div);
				flag = 1;
				break;	
			}
			else{
				flag = -1;
								
			}
		}
		
	}
	
	printf("%d\n", flag);

}