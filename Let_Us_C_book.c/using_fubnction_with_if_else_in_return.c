#include<stdio.h>
int if_else_return();
int main(){
int m;
m=if_else_return();
printf("%d",m);
    return 0;
}
int if_else_return()
{
int n;
printf("Enter the value :");
scanf("%d",&n);
if(n>=2 && n<=5)
return n;
else 
return n+10;
}