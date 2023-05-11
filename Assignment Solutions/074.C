#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,t;
	clrscr();
	printf("ENTER :");
	scanf("%d",&n);
	t=n;
	for (i=n;i>=1;i--)
	{

		printf("\n");
		for (j=i;j>=1;j--)
		{

			printf("%d ",j);

		}



	}





	getch();
}