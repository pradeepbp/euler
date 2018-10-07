
#include <stdio.h>

int length(long number);
int is_palindrome(long number);


int main(void){
	
	long product, big_palindrome = 1;
	int multi[2];
	int i, j;

	for(i = 100; i <= 999; i ++){
		for(j = 100; j <= 999; j ++){
			product = i * j;

			if((is_palindrome(product) == 1) && (product > big_palindrome)){
			big_palindrome = product;
			multi[0] = i;
			multi[1] = j;
		}
	}
	}
	printf("%ld %d %d\n", big_palindrome, multi[0], multi[1]);
	return 0;
} // end of main 

/*
 *	Find the number of digits in a number
 *
 */

int length(long number){
	long n = number;
	int count = 0;
	while(n != 0){
		n = n / 10;
		count ++;
	}	
	return count;
} // end of function

/*
 *	Check whether a number is palindrome; returns 1 if true else returns -1
 */
int is_palindrome(long number){

	int N = length(number);
	int divisor = 10;
	long digit;
	long n = number;
	int flag = 1;
	long i = 0;
	int number_string[N];
	while(n != 0){
		digit = n % divisor;
		number_string[i] = digit;
		n = n / 10;
		i ++;
	}
	
	for(int i = 0; i <= (N / 2 - 1); i ++){
		if(number_string[i] == number_string[N - (i+1)])
			continue;
		else 
			flag = -1;
			break;
	}	

	return flag;
} // end of function

