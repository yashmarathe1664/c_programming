#include<stdio.h>

int main()
{
	int temp;
	
	printf("Enter Temperature:");
	scanf("%d",&temp);
	
	if(temp>=45)
	{
		printf("\n Very Hot..!");
	}
	else if(temp<45 && temp>=40)
	{
		printf("\n Hot..!");
	}
	else if(temp<40 && temp>=20)
	{
		printf("\n Moderate..!");
	}
	else if(temp<20 && temp>=10)
	{
		printf("\n Cold..!");
	}
	else
	{
		printf("\n Very Cold..!");
	}
	
	return 0;
}
