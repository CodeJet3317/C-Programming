#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("ENTER THE NO 1:");
	scanf("%d",&a);
	printf("ENTER THE NO 2:");
	scanf("%d",&b);
	printf("ENTER THE NO 3:");
	scanf("%d",&c);
	if (a>b&&a>c)
	{
		printf("%d is maximum",a);
	}
	else if (b>a&&b>c)
	{
		printf("%d is the maximum",b);
	}
	else if (c>a&&c>b)
	{
		printf("%d is the maximum",c);
	}
	else
	{
		printf("ALL ARE EQUAL");
	}



	getch();
}