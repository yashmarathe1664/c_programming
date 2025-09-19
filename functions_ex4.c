#include<stdio.h>

void percentage(float a,float b)
{
	float per=b*100/a;
	printf("\nObtained Percentage:%.2f",per);
}


int main()
{
	float total,obtain;
	
	printf("Enter total marks:");
	scanf("%d",&total);
	printf("\nEnter obtained marks:");
	scanf("%d",&obtain);
	
	
	
	percentage(total,obtain);
	
	return 0;
}
