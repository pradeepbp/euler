/*
 *	projecteuler.net; Problem 3
 *
 */

#include <stdio.h>
#include <math.h>



/*
 * Returns 1 if the number is prime, else returns -1
 *
 */

int check_for_prime(long number){


	long root;
	root = sqrt(number);
	int flag = -1;

	long divisor = 2;
	while(divisor <= root + 1){
		if(number == 2){
			flag = 1;
			break;
		}
		else if(number % divisor == 0){
			flag = -1;
			break;
		}
		divisor ++;
		flag = 1;
	}
	return flag;
} // end of function


int main(void){
	long N = 600851475143;
	long largest_factor = 1;

	for(long i = 1; i <= sqrt(N); i ++){
		if((check_for_prime(i) == 1) && (N % i == 0) && (i > largest_factor)){
			largest_factor = i;
				
		}
	}
	printf("%ld\n", largest_factor);
	return 0;
}// end of main function
