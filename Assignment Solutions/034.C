#include<stdio.h>
#include<conio.h>
void main()
{
	int b;
	clrscr();
	printf("Enter the year:");
	scanf("%d",&b);
	(b%4==0)
	? printf("%d is a leap year",b)
	: printf("%d is not a leap year",b);
	getch();
}