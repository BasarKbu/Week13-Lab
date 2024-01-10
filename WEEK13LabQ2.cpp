#include<stdio.h>
//This program calculates and sends back the averrage of the five numbers.
float average(float number1,float number2,float number3,float number4,float number5){
	float x;
	x = (number1 + number2 + number3 + number4 + number5) / 5.0;
	
	return x;
}


int main(){
	float n1,n2,n3,n4,n5,average_5_numbers;
	printf("Enter the first number: \n"); scanf("%f",&n1);
	printf("Enter the first number: \n"); scanf("%f",&n2);
	printf("Enter the first number: \n"); scanf("%f",&n3);
	printf("Enter the first number: \n"); scanf("%f",&n4);
	printf("Enter the first number: \n"); scanf("%f",&n5);
	
	average_5_numbers = average(n1,n2,n3,n4,n5);
	
	printf("Average of the 5 numbers is:%.3f ",average_5_numbers);
	
	return 0;
}
