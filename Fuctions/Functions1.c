#include <stdio.h>
int sum()

{
int a ,b,sum =0;
printf("Enter the values :");
scanf("%d%d",&a ,&b);
printf("The sum of the values is %d\n",a+b );
return 0;
}


int main(){
    sum();
    sum();
    printf("Here are your first 2 sums and the the third one is \n");
    sum();
    return 0;
}