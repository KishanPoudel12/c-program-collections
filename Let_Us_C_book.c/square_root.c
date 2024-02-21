#include<stdio.h>
#include<math.h>
int main()
{
    int a,square_root;
    printf("Enter the value to find its square root :");
    scanf("%d",&a);
    square_root=sqrt(a);
    printf("%d is the sqrare root of %d \n",square_root,a);
    return 0;
}