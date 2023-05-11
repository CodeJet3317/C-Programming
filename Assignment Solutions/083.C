#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	char t;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{	t='A';
		printf("\n");
		for (j=1;j<=i;j++)
		{
			printf("%c",t);
			t++;
			if (t>'Z')

			t='A';
		}

	}

	getch();
}