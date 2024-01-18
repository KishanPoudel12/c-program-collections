#include <stdio.h>
void nepal();
void india();
void bhutan();
int main()
{
    printf("Initially i am in main\n");
    nepal();
    bhutan();
    india();
    printf("I am back to main\n");
    return 0;
}
void india()
{
    printf("I am in india \n");
}
void bhutan()
{
    printf("i am in bhutan\n");
}
void nepal()
{
    printf("i am  in nepal\n");
}