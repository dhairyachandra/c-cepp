//Diagonal Difference of matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a[50][50],i,j,
    sumpri=0,sumsec=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                sumpri=sumpri+a[i][j];
            if((i+j)==n-1)
                sumsec=sumsec+a[i][j];
        }
        diff=sumpri-sumsec;

        }
       printf("%d",diff);
    return 0;
}
