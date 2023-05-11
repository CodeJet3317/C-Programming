#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("\n");
		for (j=i;j>=1;j--)
		{
			printf(" %d",j);
		}
	}



	getch();

}