#include<stdio.h>
#include<conio.h>
#define max 100
void input(int,int[]);
void rev(int,int[]);
void output(int,int[]);
void main()
{
	int n,a[max],i;
	printf("Enter the limit N<=%d=\n",max);
	scanf("%d",&n);
	input(n,a);
	rev(n,a);
	output(n,a);
	getch();
}
void input(int n,int a[])
{
	int i;
	printf("Enter Elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void rev(int n,int a[])
{
	int i,j,temp;
	for (i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
void output(int n,int a[])
{
	int i;
	printf("Reversed Array =");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}

}





