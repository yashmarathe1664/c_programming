#include<stdio.h>

// function with parameter but no return

void sum(int a,int b)
{
	printf("SUM:%d \n",a+b);	
}

void subs(int a,int b)
{
	printf("SUBSTRACTION:%d \n",a-b);	
}

void multiply(int a,int b)
{
	printf("MULTIPLICATION:%d \n",a*b);	
}

void divide(int a,int b)
{
	printf("DIVISION:%d \n",a/b);	
}


int main()
{
	sum(50,40);
	subs(90,45);
	multiply(40,5);
	divide(50,10);
	return 0;
}
