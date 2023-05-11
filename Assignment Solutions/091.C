#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("ENTER THE LIMIT : ");
	scanf("%d",&n);
	i=1;
	while (i<=n)
	{


		if (i%2==0)
		{
			printf("\nEVEN :%d",i);
		}
		else
		{
			printf("\nODD :%d",i);
		}

		i++;
	}

	getch();
}