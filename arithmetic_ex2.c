#include<stdio.h>

int main()
{
	int appleQty,oilQty,milkQty,total,paid;
	int applePrice=100;
	int oilPrice=150;
	int milkPrice=60;
	
	printf("Enter apple quantity(kg):");
	scanf("%d",&appleQty);
	printf("Enter oil quantity(ltr):");
	scanf("%d",&oilQty);
	printf("Enter milk quantity(ltr):");
	scanf("%d",&milkQty);
	
	printf("\n Apple :%d",applePrice * appleQty);
	printf("\n Oil :%d",oilPrice * oilQty);
	printf("\n Milk :%d",milkPrice * milkQty);
	
	total=(applePrice * appleQty)+(oilPrice * oilQty)+(milkPrice * milkQty);
	printf("\n Total :%d",total);
	
	printf("\n Enter amount paid:");
	scanf("%d",&paid);
	
	printf("\n Balance:%d",paid-total);
	
	return 0;
}
