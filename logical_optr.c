#include<stdio.h>

int main()
{
	int x,y,z;
	
	printf("Enter x value:");
	scanf("%d",&x);
	printf("Enter y value:");
	scanf("%d",&y);	
	printf("Enter z value:");
	scanf("%d",&z);
	
	printf("\n Logical Operation Result:");
	printf("\n AND Result: %d",(x>=5 && y>=9)); //AND 
	printf("\n OR Result: %d",(x>=5 || y>=9)); //OR
	printf("\n NOT Result: %d",!(x > y)); //NOT
	printf("\n AND Result 2: %d",(x>=5 && y>=10 && z>=15));
	printf("\n OR Result 2: %d",(x>=5 || y>=10 || z>=15));
	printf("\n NOT Result 2: %d",!(x > y > z));	
	
	return 0;
}
