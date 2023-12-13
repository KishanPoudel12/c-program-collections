/*
Any character is entered through the keyboard, write a program to
determine whether the character entered is a capital letter, a small
case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various
characters:
Characters                     ASCII Values
  A – Z                        65 – 90
  a – z                        97 – 122 
  0 – 9                        48 – 57
  special symbols             0 - 47, 58 - 64, 91 - 96, 123 - 127
*/
#include<stdio.h>
int main(){
     char ch;
     printf("\nEnter the character :");
     scanf("%c",&ch);
     printf("\nThe ASCII value of entered character is %d",ch);
    if(ch>=65 && ch<=90){
        printf("\nThe written character is from A-Z");
    } 
    else if (ch>=97 && ch<=122){
    printf("\nThe entered character is from a-z");
    }
    else if (ch>=48 && ch<=57){
    printf("\nThe entered character is from 0-9");
    }
    else if( (ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<= 127)){
    printf("\nThe entered special symbol");
    }
    return 0;
}