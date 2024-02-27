#include<stdio.h>
int main()
{
    int arr[3][3],sum=0,sumR=0,sumC=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the elements of %d %d :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           sum=sum+arr[i][j]; 
        }
    }
    for(int i=0;i<3;i++){
        sumR=0;
        for(int j=0;j<3;j++){
            sumR=sumR+arr[i][j];
        }
         printf("sum of elements of row%d is %d \n",i,sumR); 
    }
       for(int j=0;j<3;j++){
        sumC=0; 
        for(int i=0;i<3;i++){
            sumC=sumC+arr[i][j];
        }
        printf("The sum of the column%d is %d \n",j,sumC);
       }
     printf("The sum of elements of the array is %d \n",sum);
     return 0;
}