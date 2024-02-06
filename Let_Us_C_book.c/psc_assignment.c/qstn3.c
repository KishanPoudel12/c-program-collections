#include<stdio.h>
// #include<conio.h>
int main()
{
    int num,count=0,i;
    // clrscr(); 
    printf("Enter the number for finding its sum :");
    scanf("%d",&num);
    for( i=1;i<=num;i++){
    printf("sum of numbers =%d",count);
        count=count+i;
    }
    // getch();
    return 0;
}