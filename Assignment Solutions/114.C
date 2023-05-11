#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[50],b[50],c=0;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("ENTER THE E %d :",i+1);
		scanf("%d",&a[i]);

	}
	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for (i=0;i<n;i++)
	{
		printf("ENTER THE E %d :",i+1);
		scanf("%d",&b[i]);

	}
	for (i=0;i<n;i++)
	{
		printf("\n%d",b[i]);
	}
	for (i=0;i<n;i++)
	{
		if (a[i]!=b[i])
			c=1;
	}
	if (c==1)
		printf("\nNOT EQUAL");
	else
		printf("\nEQUAL");





	getch();
}
