#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,n;
	clrscr();
	printf("enter limit :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a=i*i;
		printf("\n%d",a);
	}

	getch();
}