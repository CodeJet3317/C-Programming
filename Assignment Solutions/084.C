#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	char t;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);
	t='a';
	for (i=1;i<=n;i++)
	{
		printf("\n");
		for (j=1;j<=i;j++)
		{
			printf(" %c",t);
			t+=2;
			if (t>'z')
				t='a';

		}

	}


	getch();
}