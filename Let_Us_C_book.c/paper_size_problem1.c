// Paper of size A0 has dimensions 1189 mm x 841 mm. Each
// subsequent size A(n) is defined as A(n-1) cut in half, parallel to its
// shorter sides. Thus, paper of size A1 would have dimensions 841
// mm x 594 mm. Write a program to calculate and print paper sizes
// A0, A1, A2, … A8. 
#include<stdio.h>
int main()
{
    int l=1189 ,b=841,temp;
    for(int i=1;i<=8;i++){
        printf("A%d ,l=%d ,b=%d\n",i,l,b);
       temp=l;
       l=b;
       b=temp/2;
    }
    return 0;
}