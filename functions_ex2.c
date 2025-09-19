#include<stdio.h>

void area(int a,int b)
{
	printf("AREA OF RECTANGLE IS:%d \n",a*b);	
}


int main()
{
	int len,wid;
	
	printf("Enter length:");
	scanf("%d",&len);
	printf("Enter width:");
	scanf("%d",&wid);
	
	area(len,wid);
	
	return 0;
}
