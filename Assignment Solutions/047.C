#include<stdio.h>
#include<conio.h>
void main()
{
	float i,n,m=0,a;
	clrscr();
	printf("ENTER THE LIMIT :");
	scanf("%f",&n);
	for (i=1;i<=n;i++)
	{

		a=1/i;

		m+=a;
		printf("\n:%.2f",a);
	}
	printf("\nSUM :%.2f",m);



	getch();
}