#include<stdio.h>
int main()
{
    char s1[5];      //space allocated only 5 .
    printf("Enter the string :");
    gets(s1);
    printf("The entered string is :");
    puts(s1);      // but prints entire string.
    return 0;
}
// to not occur a buffer overflow use gets 