#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();

	printf("Enter Limit:");
	scanf("%d",&n);

	i=1;
	do
	{
		printf("\n%d",i);
		i++;
	}while(i<=n);



	getch();

}