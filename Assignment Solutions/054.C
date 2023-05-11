#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	float a=1,m=0,s=1;
	clrscr();
	printf("enter the limit :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		s*=i;
		a=i/s;
		m+=a;
		printf("\n%d / %.2f =%.2f",i,s,a);
	}
	printf("\nSUM :%.2f",m);

	getch();
}