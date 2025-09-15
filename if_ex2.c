#include<stdio.h>

int main()
{
	int battery;
	
	printf("Enter your battery percentage:");
	scanf("%d",&battery);
	
	if(battery<=20)
	{
		printf("\n Low Battery!! Please Charge..!");
	}
	return 0;
}
