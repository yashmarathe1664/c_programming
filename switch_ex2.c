#include<stdio.h>

int main()
{
	int num1,num2;
	char oper;
	
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("\nEnter second number:");
	scanf("%d",&num2);
	
	printf("\nWhich operation you want to perform (+ , - , * , /):");
	scanf(" %c",&oper);
	
	switch(oper)
	{
		case '+':printf("\nAddition is : %d",num1+num2);
		break;
		
		case '-':printf("\nSubstraction is : %d",num1-num2);
		break;
		
		case '*':printf("\nMultiplication is : %d",num1*num2);
		break;
		
		case '/':printf("\nDivision is : %d",num1/num2);
		break;
		
		default :printf("\nInvalid Input..!");
	}

	return 0;
}
