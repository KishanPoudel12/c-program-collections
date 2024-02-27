#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    printf("Enter the string :");
    gets(s1);
    printf("The reverse string is %s",strrev(s1));
    puts(s2);
    return 0;
}