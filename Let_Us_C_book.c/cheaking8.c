// # include <stdio.h>
//  int main( )
// {
// int j = 10, k = 12 ;
// if ( k >= j )
// {
// {
// k = j ;
// j = k ;
// }
// }
// return 0 ;
// }







//CORRECTED PROGRAM

# include <stdio.h>
 int main( )
{
int j = 10, k = 12 ;
if ( k >= j )
{
{
k = j ;
j = k ;
}
printf("%d %d",j,k);    //printf is not there in the question
}
return 0 ;
}