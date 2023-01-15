#include<stdio.h>
void main()
{
    int m,n,i,j,count=0,flag=1;
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
    printf("The transpose is: \n"); 
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[j][i]);

        }
        printf("\n");
    }       
}