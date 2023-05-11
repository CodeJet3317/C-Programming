#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,t;
	clrscr();
	printf("ENTER :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{

		printf("\n");
		for (j=1;j<=i;j++)
		{
		if (i%2==0)
		       {
			printf("# ");
			}
		else
		{
			printf("@ ");
		}

		}
	}

	getch();
}