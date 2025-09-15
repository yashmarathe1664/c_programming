#include<stdio.h>

int main()
{
	int open,food,pay;
	
	printf("Is Restaurant Open? (1 = Yes, 0 = No)");
	scanf("%d",&open);
	
	if(open==1)
	{
		printf("\n Is Food Ready? (1 = Yes, 0 = No)");
		scanf("%d",&food);
		
		if(food==1)
		{
			printf("\n Payment please: (1 = Yes, 0 = No)");
			scanf("%d",&pay);
			
			if(pay==1)
			{
				printf("\n Order Successfull..!");
			}
			else
			{
				printf("\n Order Canceled..!");
			}
		}
		else
		{
			printf("\n Sorry food Not Ready..!");
		}
	}
	else
	{
		printf("\n Retaurant Closed..!");
	}
	
	return 0;
}
