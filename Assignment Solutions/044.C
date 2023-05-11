#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,i,n;
	clrscr();
	printf("ENTER THE NO :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a=a*i;
		printf("\n%d",i);
	}
	printf("\nFACTORIAL:%d",a);

	getch();
}
