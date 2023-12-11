/*     If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred    */

#include<stdio.h>
int main(){
    int cp,sp,profit,loss;
    printf("Enter the cost price :");
    scanf("%d",&cp);
    printf("Enter the selling price :");
    scanf("%d",&sp);
    if(sp>cp){
        profit=sp-cp;
        printf("profit =%d",profit);
    }
    else if (cp>sp){
        loss=cp-sp;
        printf("loss =%d",loss);
    }
    return 0;
}