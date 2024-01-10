#include<stdio.h>

void odd_Even(int n){
	if(n % 2 == 0)
	printf("The number is even. \n");
	else
	printf("The number is odd. \n");
}

int main(){
    int number;	
	printf("Enter a number: \n"); scanf("%d",&number);
	odd_Even(number);
	
	return 0;
}
