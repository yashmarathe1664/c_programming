#include<stdio.h>

int main()
{
	int ticket,idProof,luggage;
	
	printf("Do you have a ticket? (1 = Yes , 0 = No)");
	scanf("%d",&ticket);
	
	if(ticket==1)
	{
		printf("\n Do you have ID Proof? (1 = Yes , 0 = No)");
		scanf("%d",&idProof);
		
		if(idProof==1)
		{
			printf("\n Do you have Luggage under 20kg? (1 = Yes , 0 = No)");
			scanf("%d",&luggage);
			
			if(luggage==1)
			{
				printf("\n Here is your boarding pass..!");
			}
			else
			{
				printf("\n Sorry your luggage is overwieght..!");
			}
		}
		else
		{
			printf("\n Sorry you need a ID Proof..!");
		}
	}
	else
	{
		printf("\n Sorry you dont have a ticket..!");
	}
	return 0;
}
