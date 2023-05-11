#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("\n");

		for (j=1;j<=i;j++)
		{
			printf("@");
		}
		for (k=1;k<=(n-i)*2;k++)
		{
			printf(" ");

		}

		for (j=1;j<=i;j++)
		{
			printf("@");
		}

	}

	getch();
}