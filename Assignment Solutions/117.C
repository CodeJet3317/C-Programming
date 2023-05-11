#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],i,n,j;
	clrscr();
	printf("ENTER Size:");
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
	printf("\nTranspose of Matrix\n");\
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[j][i]);
		}
	}


	getch();
}