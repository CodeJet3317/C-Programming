#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a;
	clrscr();
	printf("enter the table no :");
	scanf("%d",&a);
	for (i=1;i<=10;i++)
	{
		n=a*i;

		printf("\n%d * %d = %d",a,i,n);
	}


	getch();
}