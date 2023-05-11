#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("ENTER NO 1:");
	scanf("%d",&a);
	printf("ENTER NO 2:");
	scanf("%d",&b);
	printf("ENTER NO 3:");
	scanf("%d",&c);
	d=(a>b)?a:b;
	e=(d>c)?d:c;
	printf("%d is the max",e);



	getch();
}