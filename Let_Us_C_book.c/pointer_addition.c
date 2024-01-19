#include<stdio.h>
int main()
{
    int a=10,*P=&a;
    printf("%d\n",*P);
    printf("adress = %d\n",P);
    printf("value = %d\n",*P);
    P=P+1;
    printf("added adress =%d\n",P);
    printf("value = %d",*P);
    printf("int = %d\n",sizeof(int));
    return 0;
}