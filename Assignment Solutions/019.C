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
	if (a>b)
	{
		printf("%d is maximum",a);
	}
	else if (b>a)
	{
		printf("%d is maximum",b);
	}
	else if (a==b)
	{
		printf("BOTH ARE EQUAL");
	}

	getch();
}