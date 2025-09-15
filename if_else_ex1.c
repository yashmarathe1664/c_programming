#include<stdio.h>

int main()
{
	int amount;
	
	printf("Enter shopping amount:");
	scanf("%d",&amount);
	
	if(amount>=200)
	{
		printf("\n Free Shipping...!");
	}
	else
	{
		printf("\n Shipping Charges Extra...!");
	}
	
	return 0;
}
