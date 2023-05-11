#include<stdio.h>
#include<conio.h>
void main()
{
	void m3(int,int,int);
	int a,b,c;
	clrscr();
	printf("ENTER THE NO 1 : ");
	scanf("%d",&a);
	printf("ENTER THE NO 2 : ");
	scanf("%d",&b);
	printf("ENTER THE NO 3 : ");
	scanf("%d",&c);

	m3(a,b,c);

	getch();
}
void m3(int a,int b,int c)
{


	if(a>b && a>c)
	{
		printf("%d is greater",a);

	}
	else if(b>a && b>c)
	{
		printf("%d is greater",b);
	}
	else if(c>a && c>b)
	{
		printf("%d is greater",c);
	}
	else
	{
		printf("All are equal");
	}





}