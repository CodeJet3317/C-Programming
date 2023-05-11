#include<stdio.h>
#include<conio.h>
void main()
{
	int a[500],i,s,n,flag=0;
	clrscr();
	printf("ENTER THE SIZE : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("ENTER THE ELMENT  %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)

	{
		printf("\n%d",a[i]);
	}

	printf("\nENTER THE SEARCH ELEMENT :");
	scanf("%d",&s);
	for (i=0;i<n;i++)
	{
		if (s==a[i])
		{
			flag=1;
		}

	}
	if(flag==1)
		printf("Found");
	else
		printf("Not Found");
	getch();

}