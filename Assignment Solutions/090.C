#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("ENTER THE LIMIT :");
	scanf("%d",&n);

	i=1;
	while(i<=n)
	{
		printf("\n%d",i);
		i++;
	}
	getch();
}