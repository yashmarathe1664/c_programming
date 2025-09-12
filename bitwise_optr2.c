#include<stdio.h>

int main()
{
	int x,y;
	
	printf("Enter x value:");
	scanf("%d",&x);
	printf("Enter y value:");
	scanf("%d",&y);

	printf("\n Right Shift = %d", x >> 4); //Bitwise right shift			
	printf("\n Left Shift = %d", y << 4); //Bitwise left shift				
	
	return 0;
}
