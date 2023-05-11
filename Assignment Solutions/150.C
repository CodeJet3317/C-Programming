#include<stdio.h>
#include<conio.h>
void main()
{
	void oe(int);
	int n,c;
	clrscr();
	printf("ENTER THE NO : ");
	scanf("%d",&n);

	oe(n);

	getch();
}
void oe(int a)
{


	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("no is odd");
	}





}