#include<stdio.h>
#include<conio.h>
void main()
{
	void lp(int);
	int n;
	clrscr();
	printf("ENTER THE YEAR : ");
	scanf("%d",&n);

	lp(n);

	getch();
}
void lp(int a)
{


	if(a%4==0)
	{
		printf("%d is leap year",a);
	}
	else
	{
		printf("%d is not a leap year",a);
	}





}