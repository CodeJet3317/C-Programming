#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s=0,r;
	clrscr();
	printf("ENTER THE NO :");
	scanf("%d",&n);
	while (n!=0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;




	}
	printf("REVERSE : %d ",s);
	getch();

}