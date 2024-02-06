#include<stdio.h>
int main()
{
    struct student 
    { 
        int roll_no;
        char name[20];
        int marks;
    };
    struct student s1={1,"kishan poudel",10};
    struct student s2={2,"abcd",11};
    struct student s3={3,"efgh",12};
    s3=s1;
    printf("\n\tInfo of s1:");
    printf("\n%d\t%s\t%d\n",s1.roll_no,s1.name,s1.marks);

    printf("\n\tInfo of s2:");
    printf("\n%d\t%s\t%d\n",s2.roll_no,s2.name,s2.marks);

    printf("\n\tInfo of s3:");
    printf("\n%d\t%s\t%d\n",s3.roll_no,s3.name,s3.marks);
return 0;
}