#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,c,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=a[i]%n;
		a[c]=a[c]+n;
	}
	c=a[0];
	for(i=0;i<n;i++)
	{
		if (a[i]>2*n)
		{
			t=i;
			break;
	    }
	}
	printf("%d",t);
	getch();
	return 0;
	
}
