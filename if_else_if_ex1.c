#include<stdio.h>

int main()
{
	int age; 
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age<=5)
	{
		printf("\n Free Ticket..!");
	}	
	else if(age>5 && age<=12)
	{
		printf("\n Half Ticket..!");
	}
	else if(age>12 && age<=60)
	{
		printf("\n Full Ticket..!");
	}
	else if(age>60 && age<=75)
		printf("\n Half Ticket..!");
	}
	else
	{
		printf("\n Free Ticket..!");
	}
	return 0;
}
