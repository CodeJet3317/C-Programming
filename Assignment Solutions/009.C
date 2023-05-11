#include<stdio.h>
#include<conio.h>
#define s 1.0/2.0
void main()
{
	float a,b,c;
	clrscr();
	printf("AREA OF TRIANGLE:\nENTER THE BASE:");
	scanf("%f",&a);
	printf("ENTER THE HEIGHT:");
	scanf("%f",&b);
	c=s*a*b;
	printf("AREA=%f",c);
	getch();
}