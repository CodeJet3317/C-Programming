#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,x,y;
	float a,b,m,s=0;
	clrscr();
	printf("ENTER VALUE OF X :");
	scanf("%d",&x);
	printf("ENTER VALUE OF Y:");
	scanf("%d",&y);
	printf("ENTER THE LIMIT :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a=x+y;
		b=n*n+i;
		m=a/b;
		s+=m;
		printf("\n%.2f / %.2f =%.2f",a,b,m);
	}
	printf("\nSUM :%.2f",s);

	getch();
}

