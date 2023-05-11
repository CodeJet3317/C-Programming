#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("To find SI\nENTER PRINCIPAL AMOUNT:");
	scanf("%d",&a);
	printf("ENTER RATE:");
	scanf("%d",&b);
	printf("ENTER THE TIME PERIOD:");
	scanf("%d",&c);
	d=(a*b*c)/100;
	printf("SIMPLE INTEREST=$%d",d);
	getch();




}