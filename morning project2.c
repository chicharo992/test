#include <stdio.h>
#include <stdlib.h>


int main() {
	// variable decrelation
	int d1;
	int d2;
	float area;
	
	// user input
	printf("Enter the distance1 of  rhombus:"\n);
	scanf("%d",&d1);
	
	printf("Enter the distance2 of  rhombus:"\n);
	scanf("%d",&d2);
	
	// processing
	area= 0.5*d1*d2;
	
	//output
	printf("the area of rhombus is:%.2f",area);
	
	return 0; 
}
