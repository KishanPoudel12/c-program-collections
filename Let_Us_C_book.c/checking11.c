#include<stdio.h>
#include<conio.h>
int main()
{
    struct student
{
        char name[20];
        int roll_no;
        float mark;
        };
        struct student s1,s2,s3;
        printf("enter the name,roll no and mark of student\n");
        scanf("%s%d%f",&s1.name,&s1.roll_no,&s1.mark);
        scanf("%s%d%f",&s2.name,&s2.roll_no,&s2.mark);
        scanf("%s%d%f",&s3.name,&s3.roll_no,&s3.mark);
        printf("my entered values\n");
        printf("%s\t%d\t%f\n",s1.name,s1.roll_no,s1.mark);
        printf("%s\t%d\t%f\n",s2.name,s2.roll_no,s2.mark);
        printf("%s\t%d\t%f\n",s3.name,s3.roll_no,s3.mark);
        return 0;
        }