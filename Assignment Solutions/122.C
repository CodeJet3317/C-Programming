#include<stdio.h>
#include<conio.h>
void main()
{
	int s=0,a[50][50],b[50][50],n,i,j;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);
	printf("\nENTER THE ELEMENT FOR MATRIX A \n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT : ");
			scanf("%d",&a[i][j]);

		}
	}
	printf("\nA:\n");
	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);


		}
	}
	printf("\nENTER THE ELEMENT FOR MATRIX B \n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT : ");
			scanf("%d",&b[i][j]);

		}
	}
	printf("\nB:\n");
	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
			printf("\t%d",b[i][j]);


		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i][j]!=b[i][j])
			s=1;
		}

	}
	if (s==1)
	printf("\nNOT SAME MATRIX");
	else
	printf("\nSAME MATRIX");



	getch();
}