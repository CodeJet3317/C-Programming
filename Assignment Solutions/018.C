#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("ENTER THE YEAR:");
	scanf("%d",&a);
	if (a%4==0)
	{
		printf("%d IS A LEAP YEAR",a);

	}
	else
	{
		printf("%d IA NOT A LEAP YEAR",a);
	}

	getch();
}