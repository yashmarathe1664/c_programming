#include<stdio.h>

int main()
{
	int marks;
	
	printf("Enter your marks:");
	scanf("%d",&marks);
	
	if(marks>=35)
	{
		printf("\n P A S S..!");
	}
	else
	{
		printf("\n F A I L..!");
	}
	return 0;
}
