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
	{      if (i%2==0)
	       {
		printf("\neven %d",i);
	       }
	       else
	       {
		printf("\nodd %d",i);
	       }

		i++;
	}while(i<=n);



	getch();

}