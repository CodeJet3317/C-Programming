#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();

	printf("Enter Limit:");
	scanf("%d",&n);

	i=n;
	do
	{
		printf("\nodd %d",i);


		i-=2;
	}while(i>=1);



	getch();

}