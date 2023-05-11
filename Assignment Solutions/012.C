#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	float c,d=3.14;
	clrscr();
	printf("AREA OF CYLINDER\nENTER THE R:");
	scanf("%d",&a);
	printf("ENTER THE HEIGHT:");
	scanf("%d",&b);
	c=2*d*a*(a+b);
	printf("AREA=%.2f",c);




	getch();

}