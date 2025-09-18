#include<stdio.h>

int main()
{
	int choice,balance=1000,amount;
	char opt;
	
	do
	{
		printf("---------ATM MENU---------");
		printf("\n1.Check Balance");
		printf("\n2.Deposit");
		printf("\n3.Withdraw");
		printf("\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:printf("\nBalance:%d",balance);
			break;
		
			case 2:printf("\nEnter deposit amount:");
			scanf("%d",&amount);
			balance=balance+amount;
			printf("\nAmount Deposited, Balance:%d",balance);
			break;
		
			case 3:printf("\nEnter withdraw amount:");
			scanf("%d",&amount);
			if(amount<=balance)
			{
				balance=balance-amount;
				printf("\nAmount Withdrawn, Balance:%d",balance);	
			}
			else
			{
				printf("\nInsufficient Balance");
			}
			break;
		
			case 4:printf("\nExit");
			break;
			
			default :
			printf("\nInvalid Choice");
		}
		if(choice!=0)
		{
			printf("\nDo you want to continue? (y/n)");
			scanf(" %c",&opt);
		}
		else
		{
			printf("\nInvalid Option");
		}
	}while(opt=='y');
	
	return 0;
}
