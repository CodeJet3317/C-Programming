#include<stdio.h>
#include<conio.h>
void main()
{
	int i,r=0,n;
	clrscr();
	do
	{
	    printf("ENTER THE NO :");
	    scanf("%d",&n);
	    r=r+n;

	}while(n!=0);

	printf("\n SUM : %d",r);

	getch();
}