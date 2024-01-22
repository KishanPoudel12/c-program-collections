#include<stdio.h>
int add(int x,int y);
int main()
{
int sum;
// int a,b,sum;
// printf("Enter the numbers :");
// scanf("%d%d",&a,&b);
for(int i=0;i<10;i++){  //adding loop for experiment
sum=add(i,i+1);
printf("%d\t\n",sum);
}
return 0;
}
int add(int x,int y)
{
int d;
d=x+y;
return d;
}