#include<stdio.h>
#include<conio.h>
void main()
{
	int t,n,s=0,r;
	clrscr();
	printf("ENTER THE NO :");
	scanf("%d",&n);
	t=n;
	while (n!=0)
	{	r=n%10;
		s=s+(r*r*r);
		n=n/10;


	}
	printf(" SUM : %d",s);
	printf("\nORI : %d",t);
	if (t==s)
	{
		printf("\nARMSTRONG ");
	}
	else
	{
		printf("\nNOT  ARMSTRONG");
	}

	getch();
}