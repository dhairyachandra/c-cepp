// if duplicate found print Y else N
#include<stdio.h>
#include<conio.h>
#define max 100
int main()
{
    int a[max],i,n,b[max]={0};
    scanf("%d",&n);
    for(i-0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        b[a[i]]=0;
    for(i=0;i<n;i++)
        b[a[i]]=b[a[i]]+1;
    for(i=0;i<n;i++)
    {
        if (b[a[i]]>1)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
