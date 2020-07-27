#include<stdio.h>

int main()
{
    int a[3][3];
    int i,j,sr=0,sl=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element [%d][%d] - ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sr+=a[i][j];
            }
            if(i+j==2)
            {
                sl+=a[i][j];
            }
        }
    }
    printf("Sum of right diagonal is %d\n Sum of left diagonal is %d ",sr,sl);
    return 0;
}
