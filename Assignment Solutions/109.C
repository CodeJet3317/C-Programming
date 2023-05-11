#include<stdio.h>
#include<conio.h>
void main()
{
	int a[500],r=0,i,n;
	clrscr();
	printf("ENTER THE SIZE : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("ELEMENT %d ",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
		r+=a[i];
	}
	printf("\n SUM  : %d",r);


	getch();
}