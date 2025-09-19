#include<stdio.h>

void table(int a)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d x %d :%d\n",a,i,a*i);
	}
}


int main()
{
	int num;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	table(num);
	
	return 0;
}
