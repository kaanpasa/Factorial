#include<stdio.h>

int main(){
	
	printf("**********Factorial Taker**********\n\n");
	int counter=1;
	int number;
	int factorial=1;
	printf("Enter a number that will be taken factorial: ");
	scanf("%d", &number);
	if(number>=0){
		while(counter<=number){
		factorial*=counter;
		counter++;
	}
	printf("\n\n\t\tFactorial of %d is %d", number, factorial);
	}
	else
		printf("\n\nNegative numbers doesn't have a factorial.\nPlease enter a valid number.");
	
	return 0;
}
