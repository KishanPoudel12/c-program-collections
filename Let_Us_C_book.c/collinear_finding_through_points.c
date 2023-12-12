/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
to check if all the three points fall on one straight line
*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int x1, x2, x3, y1, y2, y3, s1, s2,s_1,s_2;
    printf("Enter the first coordinates(x1,y1) :");
    scanf("%d%d", &x1, &y1);
    printf("Enter the second coordinates(x2,y2) :");
    scanf("%d%d", &x2, &y2);
    printf("Enter the third coordinates(x3,y3) :");
    scanf("%d%d", &x3, &y3);
    s_1 = (y2 - y1) / (x2 - x1);
    s_2 = (y3 - y2) / (x3 - x2);
    s1=abs(s_1);
    s2=abs(s_2);

    if (s1 == s2)
    {
        printf("The points fall on same line");
    }
    else if(s1!=s2)
    {
        printf("The points do not fall on same line");
    }
    else{
        printf("Invalid");
    }
    return 0; 
}