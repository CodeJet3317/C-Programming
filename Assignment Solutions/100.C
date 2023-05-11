#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag=0;
	clrscr();
	printf("ENTER THE NO :");
	scanf("%d",&n);
	i=2;
	while (i<n)
	{
		if (n%i==0)
		{
			printf("\nDIVIDE BY : %d",i);
			flag=1;
		}
		i++;


	}
	if (flag==1)

	{
		printf("\nNOT PRIME ");
	}
	else
	{
		printf("PRIME");
	}
	getch();
}