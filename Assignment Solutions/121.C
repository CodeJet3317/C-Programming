#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],c[50][50],i,j,n,b[50][50];
	clrscr();
	printf("ENTER THE SIZE:");
	scanf("%d",&n);
	printf("ENTER THE MATRIX A :\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT : ");
			scanf("%d",&a[i][j]);
		}

	}
	printf("\nMATRIX A : ");
	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
	}
	printf("\n\nENTER THE MATRIX B :\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT : ");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMATRIX B :");
	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
			printf("\t%d",b[i][j]);
		}
	}







	printf("\nSUM :");

	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("\t%d",c[i][j]);
		}

	}


	getch();
}