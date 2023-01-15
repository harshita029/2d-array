#include<stdio.h>
void main()
{
    int m,n,i,j,flag=1;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    int a[m][n];
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element:");
            scanf("%d",&a[i][j]);
            if(i==j&&a[i][j]!=1||i!=j&&a[i][j]!=0)
                flag=0;

        }
    }
    printf("The created matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    
    if(flag)
        printf("It is a identity matrix.\n");
    else
        printf("It is not a identity matrix.\n");
}        