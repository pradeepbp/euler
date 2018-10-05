/*
 *	projecteuler.net, problem no:1
 *
 */

#include <stdio.h>


int main(void){

	int N = 1000;
	int counter = 0;

	for(int i = 1; i < N; i ++){
		if((i % 3) == 0 || (i % 5) == 0){
			counter = counter + i;
		}
	}
	printf("%d\n",counter);

} //end of main
