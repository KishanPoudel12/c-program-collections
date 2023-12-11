// # include <stdio.h>
// int main( )
// {
// int x = 30, y = 40 ;
// if ( x == y )
// printf ( "x is equal to y\n" ) ;
// elseif ( x > y )
// printf ( "x is greater than y\n" ) ;
// elseif ( x < y )
// printf ( "x is less than y\n" ) ;
// return 0 ;
// }
  


//CORRECTED PROGRAM

# include <stdio.h>
int main( )
{
int x = 30, y = 40 ;
if ( x == y )
printf ( "x is equal to y\n" ) ;       //In the problem else if condition was written like "elseif" !
else if ( x > y )
printf ( "x is greater than y\n" ) ;
else if ( x < y )
printf ( "x is less than y\n" ) ;
return 0 ;
}