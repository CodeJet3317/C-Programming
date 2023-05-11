#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter limit");
	scanf("%d",&n);
	for (i=n;i>=1;i-=2)
	{
		printf("\n%d",i);
	}



	getch();
}