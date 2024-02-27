#include<stdio.h>
int main()
{
    char name[15];
    printf("Enter the string :");
    gets(name);
    printf("The given string is :");
    puts(name);
    printf("The length of the given length of the string is %d",strlen(name));

    return 0;
}