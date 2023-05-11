#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("ENTER THE NUMBER:");
	scanf("%d",&a);
	if (a>0)
	{
		printf("Positive");
	}
	else if (a<0)
	{
		printf("negative");
	}
	else
	{
		printf("Zero");
	}



	getch();
}