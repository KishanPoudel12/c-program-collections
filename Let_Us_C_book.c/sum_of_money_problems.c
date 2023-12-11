/* Consider a currency system in which there are notes of seven denominations,
namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If a sum of Rs. N is entered through the keyboard,
write a program to compute the smallest number of notes that will combine to give Rs.
N */

#include <stdio.h>
int main()
{
    int amt, temp;
    printf("Enter ther amount :");
    scanf("%d", &amt);
    printf("The entered amount is %d\n", amt);
    temp = amt / 100;
    amt = amt - (temp * 100); // This gives the remaining amt left
    printf("%d*100=%d\n ", temp, temp * 100);
    temp = amt / 50;
    amt = amt - (temp * 50); // This gives the remaining amt left
    printf("%d*50=%d\n", temp, temp * 50);
    temp = amt / 10;
    amt = amt - (temp * 10); // This gives the remaining amt left
    printf("%d*10=%d\n", temp, temp * 10);
    temp = amt / 100;
    amt = amt - (temp * 10); // This gives the remaining amt left
    printf("%d*5=%d\n", temp, temp * 5);
    temp = amt / 5;
    amt = amt - (temp * 2); // This gives the remaining amt left
    printf("%d*2=%d\n", temp, temp * 2);
    temp = amt / 1;
    amt = amt - (temp * 1); // This gives the remaining amt left
    printf("%d*1=%d\n", temp, temp * 1);
    return 0;
}