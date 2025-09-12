#include<stdio.h>

int main()
{	
	int x,y;
	
	printf("Enter x value:");
	scanf("%d",&x);
	printf("Enter y value:");
	scanf("%d",&y);	

	printf("\n x & y = %d", x & y); //Bitwise AND
	printf("\n x | y = %d", x | y); //Bitwise OR	
	printf("\n x ^ y = %d", x ^ y); //Bitwise XOR		
	printf("\n Compliment = %d", ~x); //Bitwise Compliment (Use tilt symbol)		
	
	
	return 0;
	
}
