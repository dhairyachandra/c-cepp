// Number is majority if it appears more than n/2 time
#include<stdio.h>
#define max 100
int main()
{
	int a[max],n,i,d=0,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	d=0,c=1;
	for(i=0;i<n;i++)
	{
		if(a[d]==a[i])
			c++;
		else
			c--;
		if(c==0)
		{
			d=i;
			c=i;
		}
	}
	if(c!=1)
		printf("%d ",a[d]);
	else
		printf("No majority element found.");
	return 0;
}
