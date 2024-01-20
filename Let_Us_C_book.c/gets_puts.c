#include<stdio.h>
int main()
{
    char s1[10];
    char s2[10];
    printf("enter the first word :");
    gets(s1);
    printf("enter the second word :");
    gets(s2);
    printf("First word is :\n");
    puts(s1);
    printf("Second word :\n");
    puts(s2);
    return 0;
}