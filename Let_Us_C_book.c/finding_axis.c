/*
Given a point (x, y), write a program to find out if it lies on the Xaxis, Y-axis or on the origin
*/
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordiantes :");
    scanf("%d%d",&x,&y);
    if(x==0 && y!=0){
        printf("it lies in y axis");
    }
    else if(y==0 && x!=0){
        printf("it lies in x axis");
    }
    else if(x==0 && y==0){
        printf("it lies in the origin");
    }
    else {
    printf("Invalid coordinates");
    }
    return 0;
}