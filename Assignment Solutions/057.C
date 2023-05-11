#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,n;
	float s,m=0;
	clrscr();
	printf("ENTER THE LIMIT :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{       a=i*i;
		s=1.0/a;
		m+=s;
		printf("\n1 / %d = %.2f",a,s);
	}
	printf("\nSUM :%.2f",m);


	getch();
}