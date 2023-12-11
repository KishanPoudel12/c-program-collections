// # include <stdio.h>
// int main( )
// {
// int a = 300, b, c ;
// if ( a >= 400 )
//  b = 300 ;
// c = 200 ;
// printf ( "%d %d\n", b, c ) ;
// return 0 ;
// }



//CORRECTED PROGRAM
#include<stdio.h>
int main(){
int a = 300, b, c ;
if ( a >= 400 )
 b = 300 ;   //here "b" gains a garbage value 
 c = 200 ;
printf ( "%d %d\n", b, c ) ;
return 0 ;
}