// # include <stdio.h>
// int main( )
// {
// int x = 3, y, z ;
// y = x = 10 ;
// z = x < 10 ;
// printf ( "x = %d y = %d z = %d\n", x, y, z ) ;
// return 0 ;
// }

// CORRECTED PROGRAM
#include <stdio.h>
int main()
{
    int x = 3, y, z;
    y = x = 10; // initially x is assigned and then y is assignd
    z = x < 10; // not a proper value
    printf("x = %d y = %d z = %d\n", x, y, z);
    return 0;
}