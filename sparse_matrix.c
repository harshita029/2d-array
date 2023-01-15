#include<stdio.h>
int main()
{
    int m,n,i,j,count=0;
    printf("Enter the rows and the columns:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
                count++;
        }
    }
    printf("The created matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    if(count>(m*n)/2)
        printf("It is a sparse matrix\n");
    else
        printf("It is not a sparse matrix.\n");
    return 0;        
}