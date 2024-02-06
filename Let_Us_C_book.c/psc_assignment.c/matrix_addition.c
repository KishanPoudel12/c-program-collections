#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
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
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Third matrix:\n");
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