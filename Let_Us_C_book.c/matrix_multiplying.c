#include<stdio.h>
int main()
{
    int sum;
    int a[3][3],b[3][3],c[3][3];
    printf("FOR FIRST MATRIX\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element of index %d %d :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("FOR SECOND MATRIX\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element of index %d %d :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=0;
            for(int k=0;k<3;k++){
                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
            
        }
    }
    printf("THE MATRIX MULTIPLICATION IS :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}