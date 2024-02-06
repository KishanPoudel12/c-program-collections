#include<stdio.h>
// #include<conio.h>
int main()
{
    int A[100],n,count=0,i;
    // clrscr();
    printf("Enter the no of elements :");
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        printf("Enter the element at index %d :",i);
        scanf("%d",&A[i]);
    }
    printf("The entered element are \n");
     for( i=1;i<=n;i++)
    {
        printf(" %d\n",A[i]);
    }
    for( i=1;i<=n;i++)
    {
        if(A[i]%2 != 0)
        count=count +A[i];
    }    
    printf("The sum of odd elements is %d ",count);
    // getch();
    return 0;
}