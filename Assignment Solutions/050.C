#include<stdio.h>
#include<conio.h>
#include <math.h>
void main()
{
	int i,n;
	float a,m=0;
	clrscr();
	printf("enter the limit :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a=pow(i,i);
		m+=a;
		printf("\n%f",a);
	}
	printf("\nSUM :%f",m);


	getch();
}