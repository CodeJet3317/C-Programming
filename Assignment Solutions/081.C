#include<stdio.h>
#include<conio.h>
void main()

{
	int i,j,k,n;
	clrscr();
	printf("ENTER :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("\n");
		for (k=1;k<=n-i;k++)

		{
			printf("  ");
		}
		for (j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for (j=i-1;j>=1;j--)
		{
			printf("%d ",j);
		}
	}

	getch();
}