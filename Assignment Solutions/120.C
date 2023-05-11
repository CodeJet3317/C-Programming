#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],i,j,n,m,b[50][50];
	clrscr();
	printf("ENTER THE SIZE:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT : ");
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
	}
	printf("\nENTER THE MULTIPLICATION NO :");
	scanf("%d",&m);
	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
			b[i][j]=a[i][j]*m;
			printf("\t%d",b[i][j]);
		}

	}


	getch();
}