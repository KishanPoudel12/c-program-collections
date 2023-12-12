#include <stdio.h>
int main( )
{
int i = 4, j = -1, k = 0, w, x, y, z ;
w = i || j || k ;  //1
x = i && j && k ;  //0
y = i || j && k ;  //0*  (  && has higher precedence  so j && k occurs first hence 1 is the answer )
z = i && j || k ;  //1
printf ( "w = %d x = %d y = %d z = %d\n", w, x, y, z ) ;
return 0 ;
}

//  PRECEDENCE OF OPERATORS 
//  0. ==
//  1. !
//  2. &&
//  3. ||

