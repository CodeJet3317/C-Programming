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
		a*=i;
		m+=a;
		printf("\nFACTORIAL OF %d =%d",i,a);
	}
	printf("\nSUM :%d",m);

	getch();
}