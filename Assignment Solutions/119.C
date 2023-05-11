#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],i,j,n,s=0,m;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT :");
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
	printf("\nMAJOR");
	s=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i==j)
			printf("\n%d",a[i][j]);
			if (i==j)
			s+=a[i][j];

		}
	}
	printf("\nSUM OF MAJOR = %d ",s);
	printf("\nMINOR");
	s=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i+j==n-1)
			printf("\n%d",a[i][j]);
			if (i+j==n-1)
			s+=a[i][j];

		}
	}
	printf("\nSUM OF MINOR = %d",s);



	getch();
}