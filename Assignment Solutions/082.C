#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;
	char t;
	clrscr();
	printf("ENTER THE SIZE :");
	scanf("%d",&n);
	t='A';
	for (i=1;i<=n;i++)

	{
		printf("\n");
		for (j=1;j<=i;j++)
		{
			printf(" %c",t);
			t++;
			if(t>'Z')
				t='A';

		}

	}


	getch();
}