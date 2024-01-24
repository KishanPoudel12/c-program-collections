#include<stdio.h>
int main()
{ 
 int x = 4, y, z ; 
 y = --x ; 
 printf("%d\n",x);
 z = x-- ; 
 printf ( "%d %d %d\n", x, y, z ) ; 
 return 0 ; 
}