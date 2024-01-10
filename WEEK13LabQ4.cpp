#include<stdio.h>
#include<math.h>
//This program checks both if the number is prime and if the number is armstrong.
void prime_number(int n){
	int cnt = 0,i;
	
	for(i=2;i<(n/2);i++){
		if(n % i == 0)
		cnt++;
	}
	
	if(cnt == 0)
	printf("Your number is prime number. \n");
	else
	printf("Your number is not prime number. \n");
	
}

void armstrong(int n){
	int digit = 0,temp,sum = 0,temp2;
	temp = n;
	temp2 = n;
	while(temp != 0){
		temp = temp /10;
		digit++;
	}
	
	while(temp2 != 0){
		sum += pow(temp2 % 10,digit);
		temp2 = temp2 /10;
	}
	
	if(sum == n)
	printf("Your number is armstrong number. \n");
	else
	printf("Your number is not armstrong number. \n");
	
}

int main(){
	int number;
    printf("Enter a number: \n"); scanf("%d",&number);
    
    prime_number(number);
    armstrong(number);
	
	
	return 0;
}
