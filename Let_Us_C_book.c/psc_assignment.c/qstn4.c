#include<stdio.h>               //left 
// #include<conio.h>
int main()
{
    int n,i;
    struct student {
        int roll_no;
        char name[20];
        int marks;
        char grade;
    };
    // clrscr();
    printf("Enter the no of students :");
    scanf("%d",&n);
    struct student s[100];
    for ( i=0;i<n;i++)
    {
        printf("Enter the necessary information(roll_no ,name ,marks,grade) of student %d   ",i);
        scanf("%d %s %d %c",&s[i].roll_no,&s[i].name,&s[i].marks,&s[i].grade);
    }
    for ( i=0;i<n;i++)
    {
        printf("%d\t %s\t %d\t %c\t\n",s[i].roll_no,s[i].name,s[i].marks,s[i].grade);
    }
    // getch();
    return 0;
}