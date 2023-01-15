#include<stdio.h>
void main()
{
    int i,j,a[3][3],count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enetr the elements:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    printf("%d zeroes are found in this matrix.",count);
}