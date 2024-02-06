#include<stdio.h>
int main()
{
    int a[3][3],b[3][2],c[3][3];
    printf("1st Matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    {
        printf("\nEnter the elements of index %d %d :",i,j);
        scanf("%d",&a[i][j]);
    }
    }
    printf("2nd Matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    {
        printf("\nEnter the elements of index %d %d :",i,j);
        scanf("%d",&b[i][j]);
    }
    }
    printf("1st matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    { 
        for(int j=0;j<3;j++)
        {
             int sum=0;
            for(int k=0;k<3;k++)
            {
               sum=sum+a[i][k]*b[k][i];
               c[i][j]=sum;
            }
        }
    }
    printf("Matrix multiplication:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}