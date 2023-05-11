#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=0;
	clrscr();
	printf("ENTER THE NO :");
	scanf("%d",&n);
	i=1;
	while (i<=n)
	{       a+=i;
		printf("\n%d",i);
		i++;
	}
	printf("\nSUM : %d",a);


	getch();
}