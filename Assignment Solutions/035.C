#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("ENTER THE NO 1:");
	scanf("%d",&a);
	printf("ENTER THE NO 2:");
	scanf("%d",&b);
	c=(a>b)?a:b;
	printf("%d is max",c);


	getch();
}