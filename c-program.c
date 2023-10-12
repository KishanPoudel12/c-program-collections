// Program to input  two numbers and find the sum and average of the two numbers
#include<stdio.h>
int main(){
    int a,b,sum;
    float average ;
    printf("Enter the values :");
    scanf("%d%d",&a,&b);
    sum =a+b;
    average =(a+b)/2;
    printf("The sum of the numbers is %d\n ",sum);
    printf("The average of the numbers is %f\n ",average);
    return 0;
}