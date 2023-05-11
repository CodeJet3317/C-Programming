#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	float m=0,a;
	clrscr();
	printf("enter the limit :");
	scanf("%d",&n);
	for (i=2;i<=n;i+=2)
	{
		a=1.0/(float)i;
		m+=a;
		printf("\n1 / %d = %.2f",i,a);
	}
	printf("\nSUM :%.2f",m);


	getch();
}