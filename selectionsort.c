//Selection Sort

#include<stdio.h>
#include<conio.h>
#define max 200
void selection_sort(int a[],int n)
 {
   int i,j,temp=0;
     for(i=0;i<n-1;i++)
        {
           for(j=i+1;j<n;j++)
             {
                 if(a[i]>a[j])
                  {
                   temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
                  }
             }
        }
    for(i=0;i<n;i++)
        printf(" %d",a[i]);

 }
int main()
{

     int n,a[max],i,j;
     scanf("%d",&n);
       for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
      selection_sort(a,n);
    getch();
    return 0;
}
