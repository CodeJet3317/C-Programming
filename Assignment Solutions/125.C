#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],flag1=0,flag2=0;
	int i,j,n;
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
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=1)
				{
					flag1=1;
				}
			}
			else
			{
				if(a[i][j]!=0)
				{
					flag2=1;
				}
			}
		}

	}
	if(flag1==1 || flag2==1)
		printf("\n Not Identity");
	else
		printf("\n Identity");


	getch();
}