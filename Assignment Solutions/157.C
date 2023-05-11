#include<stdio.h>
#include<conio.h>
void main()
{
	void arr(int,int[]);
	int i,n,a[50];
	clrscr();
	printf("ENTER LIMIT : ");
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		printf("ENTER ELEMENT %d : ",i+1);
		scanf("%d",&a[i]);
	}


	arr(n,a);


	getch();
}

void arr(int n,int a[])
{
	int i,t=a[0],m=a[0];
	for (i=0;i<n;i++)
	{
		if (m<a[i])
		{
			m=a[i];
		}
		if (t>a[i])
		{
			t=a[i];
		}

	}
	printf("\nMAX : %d",m);
	printf("\nMIN : %d",t);

}