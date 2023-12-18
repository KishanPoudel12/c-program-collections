#include <stdio.h>
#include <stdlib.h>
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float my_div(float a, float b);
int main()
{
    int operation, i = 0;
    float a, b, result;
    printf("\nEnter the value of a and b :");
    scanf("%f%f", &a, &b);
    do
    {
        printf("\nEnter the operation (1=addition),(2=substraction),(3=multiplication),(4=division) :");
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
            result = add(a, b);
            printf("%f", result);
            break;
        case 2:
            result = sub(a, b);
            printf("%f", result);
            break;
        case 3:
            result = mul(a, b);
            printf("%f", result);
            break;
        case 4: 
        if(b!=0){
            result = my_div(a, b);
            printf("%f", result);
            }
            else {
            printf("Error");
            }
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid operation");
        }
        i = i + 1;
    } while (i < 5);
    return 0;
}

float add(float a, float b)
{
    float c = 0;
    c = a + b;
    return c;
}
float sub(float a, float b)
{
    float c;
    c = a - b;
    return c;
}
float mul(float a, float b)
{
    float c;
    c = a * b;
    return c;
}
float my_div(float a, float b)
{
    float c;
    c = a / b;
    return c;
}
