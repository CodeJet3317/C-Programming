#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	float d;
	clrscr();
	printf("ENTER MARKS M1:");
	scanf("%d",&a);
	printf("ENTER MARKS M2:");
	scanf("%d",&b);
	printf("ENTER MARKS M3:");
	scanf("%d",&c);
	d=(a+b+c)/3;
	printf("YOUR PERCENTAGE=%f",d);
	if (d>90)
	{
		printf("\nA+ GRADE");
	}
	else if (d<90)
	{
		printf("\nA GRADE");
	}


	getch();
}