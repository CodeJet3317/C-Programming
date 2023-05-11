#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	float a,m=0;
	clrscr();
	printf("ENTER THE LIMIT :");
	scanf("%d",&n);
	for (i=1;i<=n;i+=2)
	{
		a=1.0/i;
		m+=a;
		printf("\n1 / %d = %.2f",i,a);
	}
	printf("\nSUM :%.2f",m);








	getch();
}