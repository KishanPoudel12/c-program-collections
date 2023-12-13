/*
Write a program to receive value of an angle in degrees and check
whether sum of squares of sine and cosine of this angle is equal to
1
*/
#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
    int degree;
    float radian,temp;
    printf("Enter the degree :");
    scanf("%d",&degree);
    radian =degree*(PI /180);
temp =pow(sin(radian),2) + pow(cos(radian),2) ;
if(temp==1){
    printf("equals to 1");
}
else if(temp!=1){
    printf("not equal");
}
    return 0;
}