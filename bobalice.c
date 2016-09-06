// Comparing Scores of BOB and ALICE
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[3],b[3],alicescore=0,bobscore=0;
    file *fp;
    fp=freopen("read.txt","r",stdin);
    for(i=0;i<3;i++)
    {

        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {

        scanf("%d",&b[i]);
    }
    fclose(fp);
    for(i=0;i<3;i++)
    {

        if(a[i]>b[i])
            alicescore++;
        else if(a[i]<b[i])
            bobscore++;
    }
    fp=freopen("write.txt","w",stdout);
    printf("%d %d",alicescore,bobscore);
    fclose(fp);
    return 0;
    }
}
