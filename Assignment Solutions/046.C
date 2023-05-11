
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,n,m=0;
	clrscr();
	printf("ENTER THE LIMIT :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)

	{

		a=i*i;
		m=m+a;
		printf("\nSQUARES :%d",a);

	}
	printf("\nSUM:%d",m);


	getch();
}