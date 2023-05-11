#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,i,n;

	clrscr();
	printf("ENTER THE LIMIT :");
	scanf("%d",&n);
	for (i=1;i<=n;i+=3)
	{       a+=i;


		printf("\n%d",i);
	}
	printf("\nSUM :%d",a);


	getch();
}