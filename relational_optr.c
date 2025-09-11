#include<stdio.h>

int main()
{
	int num1,num2;
	
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	
	printf("\n Relational Opereators Result: ");
	printf("\n num1==num2 : %d ",num1==num2); //Equal to
	printf("\n num1!=num2 : %d ",num1!=num2); //Not Equal to
	printf("\n num1>num2 : %d ",num1>num2);	 //Greater than
	printf("\n num1<num2 : %d ",num1<num2);	 //Less Than
	printf("\n num1>=num2 : %d ",num1>=num2); //Greater than Equal to
	printf("\n num1<=num2 : %d ",num1<=num2); //Less than Equal to
	
	return 0;
}
