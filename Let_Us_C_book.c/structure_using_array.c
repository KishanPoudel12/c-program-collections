#include<stdio.h>
int main()
{
    struct student 
    {
        int class;
        char name[50]; //it is a string
        int roll_no;
    };
    struct student s[3];
    printf("Enter the information:\n");
    for (int i=0;i<3;i++)
    scanf("%d %s %d",&s[i].class,s[i].name ,&s[i].roll_no); //no need to add & while reading a string
    printf("The infomation entered is :\n");
    for(int i=0;i<3;i++){
    printf("%d %s %d",s[i].class,s[i].name ,s[i].roll_no);
    printf("\n");
    }
    return 0;
}