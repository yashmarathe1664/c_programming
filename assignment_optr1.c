#include<stdio.h>

int main()
{
	int x=10;
	
	x+=5; //x = x + 5;
	printf("\n After x value x= %d",x);

	x-=5; //x = x - 5;
	printf("\n After x value x= %d",x);
	
	x*=5; //x = x * 5;
	printf("\n After x value x= %d",x);

	x/=5; //x = x / 5;
	printf("\n After x value x= %d",x);
		
	x%=5; //x = x % 5;
	printf("\n After x value x= %d",x);
				
	return 0;
	
}
