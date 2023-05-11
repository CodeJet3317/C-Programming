#include<stdio.h>
#include<conio.h>
void main()
{
	int a,s=0,i,n;
	clrscr();
	printf("ENTER THE LIMIT :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	       a=i*5;

		printf("\n%d",a);
		s=s+a;
	}
	printf("\nSUM :%d",s);

	getch();
}