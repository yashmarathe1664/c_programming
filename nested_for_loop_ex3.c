#include<stdio.h>

int main()
{
	int i,j,num=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}	
	/*
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d ",num++);
		}
		printf("\n");
	}*/
	
	
	return 0;
}
