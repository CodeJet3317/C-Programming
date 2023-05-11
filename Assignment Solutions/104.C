#include<stdio.h>
#include<conio.h>
void main()
{
	int s=0,r,n;
	clrscr();
	printf("ENTER THE NO :");
	scanf("%d",&n);
	do
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;

	}while(n!=0);

	printf("REVERSE : %d",s);

	getch();
}