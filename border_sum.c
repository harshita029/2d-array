#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    printf("Enter the size of the 2-D array. ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&a[i][j]);        
        }
    }
    // to find the sum of the border elements of a 2-d array.
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||j==0||i==n||j==n)
            {
                sum=sum+a[i][j];
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("%d is the sum of the ddiagonal elements of this array.",sum);
}