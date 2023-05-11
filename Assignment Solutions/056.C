#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0,b=1,c,n;
	clrscr();
	printf("ENTER LIMIT :");
	scanf("%d",&n);
	printf("%d",a);
	printf("\n%d",b);

	for (i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;

		printf("\n%d",c);
	}


	getch();
}