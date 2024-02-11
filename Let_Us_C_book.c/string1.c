#include<stdio.h>
int main()
{
    char s1[15];
    printf("Enter the string :");
    scanf("%s",s1); //no matter whether you put a "&" or not .
    printf("%s",s1);
    return 0;
}