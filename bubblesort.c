//bubble sort

#include<stdio.h>
#include<conio.h>
#define max 100
int main()
{

     int temp=0,n,a[max],i,j;
     scanf("%d",&n);
       for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
       for(i=0;i<n;i++)
        {
           for(j=0;j<n-i-1;j++)
             {
                 if(a[j]>a[j+1])
                  {
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
                  }
             }
        }
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
    getch();
    return 0;
}
