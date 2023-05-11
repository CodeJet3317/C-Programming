#include<stdio.h>
#include<conio.h>
void main()
{
	void m2(int,int);
	int a,b;
	clrscr();
	printf("ENTER THE NO 1 : ");
	scanf("%d",&a);
	printf("ENTER THE NO 2 : ");
	scanf("%d",&b);

	m2(a,b);

	getch();
}
void m2(int a,int b)
{


	if(a>b)
	{
		printf("%d is greater",a);

	}
	else if(a<b)
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("both are equal");
	}





}