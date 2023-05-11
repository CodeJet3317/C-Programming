#include<stdio.h>
#include<conio.h>
void main()
{
	int m=0,n;
	clrscr();

	do
	{
		printf("ENTER THE NO :");
		scanf("%d",&n);


		if (n>m)
		{
			m=n;
		}

	}while(n!=0);
	printf("MAX : %d",m);

	getch();
}