#include<stdio.h>
float square_area(float edge){
	return edge *edge;
}


int main(){
	float edge,area;
	printf("Enter the edge of the square: \n"); scanf("%f",&edge);
	area = square_area(edge);
	
	printf("The area of the square is:%.3f ",area);
	
	return 0;
}
