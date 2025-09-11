#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter age:");
	scanf("%d",&age);
	
	printf("\n Eligible for voting: %d",age>=18);
	
	return 0;
}
