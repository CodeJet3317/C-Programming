#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],b[50][50],c[50][50]={0};
	int i,j,n,k=0;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);
	printf("\nFOR A :\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT : ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMATRIX A :\n");
	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
	}
	printf("\nFOR B :\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT : ");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMATRIX B :\n");
	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
			printf("\t%d",b[i][j]);
		}
	}
	printf("\nMATRIX MUL : \n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}
       for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
			printf("\t%d",c[i][j]);
		}
	}



	getch();
}