#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,t;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);
	t=1;
	for (i=1;i<=n;i++)
	{
		printf("\n");
		for (j=1;j<=i;j++)
		{
			printf(" %d",t);
			t++;

		}

	}



	getch();

}