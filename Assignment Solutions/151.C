#include<stdio.h>
#include<conio.h>
void main()
{
	void pn(int);
	int n;
	clrscr();
	printf("ENTER THE NO : ");
	scanf("%d",&n);

	pn(n);

	getch();
}
void pn(int a)
{


	if(a>0)
	{
		printf("%d is positive",a);

	}
	else if(a<0)
	{
		printf("%d is negative",a);
	}
	else
	{
		printf("%d is zero",a);
	}





}