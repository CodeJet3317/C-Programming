#include<stdio.h>
#include<conio.h>
void main()
{
	int bill;
	clrscr();
	printf("ENTER THE AMOUNT:");
	scanf("%d",&bill);
	if (bill>=2000)
	{
		printf("YOU GET DISCOUNT");
	}
	else 
	{
		printf("YOU GET NO DISCOUNT");
	}


	getch();
}