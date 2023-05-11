#include<stdio.h>
#include<conio.h>
void main()

{
	int i,n,c[50],a[50],b[50];
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
	printf("\nSUM :");
	for (i=0;i<n;i++)
	{       c[i]=a[i]+b[i];
		printf("\n%d",c[i]);
	}




	getch();
}