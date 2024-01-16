// WAP to enter the marks of 5 stds and find the sum avg of those marks .
#include<stdio.h>
int main()
{
    int m[5],sum=0;
    for(int i=0;i<5;i++){
        printf("Enter the mark of subject %d :",i);
        scanf("%d",&m[i]);
    }
    for(int i=0;i<5;i++){
        sum=sum+m[i];
    }
    printf("sum is %d\n",sum);
    printf("average is %d\n",sum/5);
    return 0;
    
}