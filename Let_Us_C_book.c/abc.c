#include<stdio.h>
void main()
{
    int m,n,gcd,lcm,small,i;
    // clrscr();    
    printf("enter any two numbers:");
    scanf("%d%d",&n,&m);
    if(m==0&&n!=0)
    {
        gcd=n;
    }
    if(m!=0&&n==0)
    {
        gcd=m;
    }
    if(m>n)
    {
        small=n;
    }
     else
     {
         small=m;
     }
     for(i=1;i<=small;i++)
     {
         if(m%i==0&&n%i==0){
         gcd=i;
     }
     lcm=(m*n)/gcd;
     printf("\ngcd of %d & %d is %d ",m,n,gcd);
         printf("\nlcm of %d & %d is %d\n ", m,n, lcm);
}
}