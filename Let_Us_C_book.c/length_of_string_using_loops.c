#include<stdio.h>
int main()
{   int i=0,count=0;
    char s1[15];
    printf("Enter the string :");
    gets(s1);
   while(s1[i]!='\0')
   {
    count =count +1;
    i++;
   }
   puts(s1);
   printf("The length of the string is %d ",count);
    return 0;
}