#include<stdio.h>
#include<conio.h>
void main()
{
	int s,i,n,a[50],c=0;
	clrscr();
	printf("ENTER THE SIZE : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("ENTER THE ELMENT  %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)

	{
		printf("\n%d",a[i]);
	}
	printf("ENTER THE SEARCH ELEMENT :");
	scanf("%d",&s);
	for (i=0;i<n;i++)
	{
		if (s==a[i])
			c++;

	}
	printf("total occurence : %d",c);
	getch();
}
