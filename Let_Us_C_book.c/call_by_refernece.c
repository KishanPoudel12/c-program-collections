#include<stdio.h>
int swap(int* ,int *);
int main()
{
    int a ,b;
    printf("Enter the value of a and b :\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d and b=%d\n",a,b);

}
int swap(int *j,int *k)
{
    int t=0;
     t=*j;
    *j=*k;
    *k=t;
}