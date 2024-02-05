#include<stdio.h>
int add(int,int );
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int num,temp,a,b;
    printf("Enter the numbers for operation :");
    scanf("%d%d",&a,&b);
    printf("Enter the operation(1=addition , 2=substraction ,3=multiplication ,4=division ,5=exit)  :");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("%d",add(a,b));
        break;
        case 2: printf("%d",sub(a,b));
        break;
        case 3: printf("%d",mul(a,b));
        break;
        case 4: printf("%d",div(a,b));
        break;
        case 5: exit(0);
    }   
    return 0;
}
int add(x,y)
{
int z=x+y;
return z;
}
int sub(x,y)
{
    int z=x-y;
    return z;
}
int mul(x,y)
{
int z=z*y;
return z;
}
int div(x,y)
{
   int z;
   if(y==0)
   {
   printf("Division not possible");
   exit(0);
   }
   else
   z=x/y;
   return z;
}