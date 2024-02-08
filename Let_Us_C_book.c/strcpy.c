#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    printf("Enter the string :"); 
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    printf("After reversing the string :");
    puts(s2);
    strcmp(s1,s2);
    if(strcmp(s1,s2) == 0)
    printf("%s is a pelindrome ",s1);
    else
    printf("%s is not a pelindrome ",s1);
return 0;
}
