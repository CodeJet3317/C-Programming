#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=0;
	clrscr();
	printf("sum till no :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a+=i;
		printf("\n%d",i);
	}
	printf("\nsum:%d",a);


	getch();
}
