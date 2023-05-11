#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("ENTER :");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{

		printf("\n");
		for (j=1;j<=i;j++)
		{

			printf("%d ",i);
		}
	}


	getch();
}