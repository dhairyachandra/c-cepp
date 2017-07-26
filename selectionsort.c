#include <stdio.h>
#include <stdlib.h>

void sort(int a[100], int n)
{
  int i,j,min,temp;
  for (i=0;i<n;i++)
  {
    min = a[i];
    for(j=i+1;j<n;j++)
    {
      if(a[j] < a[i])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}
int main()
{
  int a[100],i,j,n;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  sort(a,n);
  for(i=0;i<n;i++)
  {
      printf("%d ",a[i]);
  }
}
