#include<stdio.h>
#include<conio.h>
void main()

{
	int i,j,n;

	clrscr();
	printf("Enter size:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=n;j++)
		{
				printf("* ");
		}
	}
	getch();
}
