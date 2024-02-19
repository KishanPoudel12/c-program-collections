#include <stdio.h>
int print_array(int *a, int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int bubble_sorting(int *a, int x)
{
    int temp = 0;
    for (int i = 0; i < x - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < x - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}
int main()
{
    int a[5]={1,4,2,5,3};
    print_array(a,5);
    bubble_sorting(a,5);
    print_array(a,5);
    return 0;
}