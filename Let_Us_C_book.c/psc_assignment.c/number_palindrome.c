#include<stdio.h>
int main()
{
    int num,num_rev=0,rem=0,temp;
    printf("\nEnter the number :");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
{
    rem=num%10;
    num_rev=rem+num_rev*10;
    num=num/10;
}
    num=temp;
  printf("the given num is =%d ,The reverse num is %d\n",num,num_rev);
  if(num==num_rev)
  printf("The num is palindrome\n ");
  else
  printf("The num is not a palindrome\n");
  return 0;
}