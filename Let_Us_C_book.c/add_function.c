#include <stdio.h>
int add();
int main()
{
    int a, b, sum;
    printf("Enter the value of a and b :");
    scanf("%d%d", &a,&b);
    // sum = add(a, b);
    printf("%d", add(a, b));
    return 0;
}
int add(int x,int y)
{
    int result;
    result = x + y;
    return result;
}