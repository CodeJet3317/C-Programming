#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s=0,r;
	clrscr();
	printf("ENTER THE NO :");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;

	}
	printf("\nS:%d",s);
	getch();
}