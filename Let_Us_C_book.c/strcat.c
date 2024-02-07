#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10] ,s2[20],a;
    printf("Enter the string1 :");
    gets(s1);
    printf("Enter the string2 :");
    gets(s2);
    printf("string concatanation = %s", strncat(s1,s2,2)); // n terms of last string
    return 0;

}