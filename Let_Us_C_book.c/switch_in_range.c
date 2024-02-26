#include<stdio.h>
int main()
{
    int arr[5]={1,5,10,15,20};
    for(int i=0;i<5;i++)
    {
        switch(arr[i])
        {
            case  1 ... 10: printf(" %d From range 1-10\n",arr[i]);
            break;
            case 11 ... 20: printf(" %d From range 11-20\n",arr[i]);
            break;
            default       : printf("not in range ");
            break;

        }
    }
    return 0;
}