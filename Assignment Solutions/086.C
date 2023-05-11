#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	char t;
	clrscr();
	printf("ENTER THE SIZE :");

	scanf("%d",&n);
	t='Z';
	for (i=1;i<=n;i++)
	{

		printf("\n");

		for (k=1;k<=n-i;k++)
		{
			printf(" ");



		}
		for (j=1;j<=i;j++)
		{
			printf(" %c",t);

			if (t<'A')
				t='Z';


		}
		t--;

	}
	getch();
}