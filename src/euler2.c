/*
 *	Projecteuler.net; problem no:2
 *
 *
 */


#include <stdio.h>

int main(void){
	long limit = 4000000;
	int n1 = 1;
	int n2 = 2;
	int x;
	int sum = 0;

	while(n2 <= limit){

		if(n2 % 2 == 0){
			sum = sum + n2;
		}
		x = n2;
		n2 = n1 + n2;
		n1 = x;
	}

	printf("%d\n", sum);
	return 0;

}
