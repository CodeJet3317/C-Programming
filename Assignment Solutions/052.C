#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,i,m=0,n;
	clrscr();
	printf("ENTER THE LIMIT :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a=i*10;
		m+=a;
		printf("\n%d",a);
	}
	printf("\nSUM :%d",m);

	getch();
}