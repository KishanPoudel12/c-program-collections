#include<stdio.h>
void mail();
int main()
{   
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a%2==0)
    mail();
    else
    printf("hi");
    return 0;

}
void mail()
{
    printf("hello");
}