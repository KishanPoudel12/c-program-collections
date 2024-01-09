// While purchasing certain items, a discount of 10% is
// offered if the quantity purchased is more than 1000. If quantity and
// price per item are input through the keyboard, write a program to
// calculate the total expenses. 

#include<stdio.h>
int main(){
    int qty,price,total;
    float dis;
    printf("Enter the number of items: ");
   scanf("%d",&qty);
  printf("Enter the price:");
  scanf("%d",&price);
  if(qty>1000){
    dis=10;
  }else if (qty<1000){
    dis=0; 
  }
  total=(qty*price)-(price*qty*dis/100);
  printf("\nThe total amount you need to pay is Rs %d\n",total);
  return 0;
}