#include<stdio.h>
#include<conio.h>
void main()
{
	void arr(int,int[]);
	int i,n,a[50];
	clrscr();
	printf("ENTER LIMIT : ");
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		printf("ENTER ELEMENT %d : ",i+1);
		scanf("%d",&a[i]);
	}


	arr(n,a);


	getch();
}

void arr(int n,int a[])
{
	int i,j,t;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}

		}


	}
	for (i=0;i<n;i++)
	{
		printf("\n%d",a[i]);

	}

}