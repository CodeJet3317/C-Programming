#include<stdio.h>
#include<conio.h>
void main()
{
	int bill;
	clrscr();
	printf("ENTER THE AMOUNT:");
	scanf("%d",&bill);
	if (bill>=2000&&bill<3000)
	{
		printf("YOU GET 10% DISCOUNT");
	}
	else if (bill>=3000&&bill<5000)
	{
		printf("YOU GET 20% DISCOUNT");
	}
	else if (bill>=5000)
	{
		printf("YOU GET 50% DISCOUNT");
	}


	getch();
}