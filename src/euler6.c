/*
 *	projecteuler.c; problem no:6
 *
 */

#include <stdio.h>


long abs1(long number);

int main(void){
	
	long sum_of_squares = 0;
	long sum_of_numbers = 0;
	int LIMIT = 100;

	//calculate sum of numbers
	
	sum_of_numbers = (LIMIT * (LIMIT + 1)) / 2;	

	//calculate sum of squares
	for(int i =1; i<= LIMIT; i ++){
		sum_of_squares += i * i;
	}
	printf("%ld\n",
		abs1(sum_of_squares - (sum_of_numbers * sum_of_numbers)));
	return 0;
}

long abs1(long number){
	if(number < 0)
		return number * -1;
	else
		return number;
}
