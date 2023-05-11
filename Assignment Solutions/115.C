
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,a[50],t;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("ENTER THE ELEMENT %d :",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i] < a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\nSorted Array Ascending");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i] > a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\nSorted Array Descending");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}

	getch();
}