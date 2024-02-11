#include<stdio.h>
int main()
{
    struct student 
    {
        int roll_no;
        char name[20];
        int  age;
    }s1,s2,s3;
    printf("\nEnter the information about students :\n");
    scanf("%d %19s  %d",&s1.roll_no,&s1.name,&s1.age);
    scanf("%d %19s %d",&s2.roll_no,&s2.name,&s2.age);
    scanf("%d %19s %d",&s3.roll_no,&s3.name,&s3.age);
    printf("\nThe information given is :\n");
    printf("%d\t%19s\t%d\n",s1.roll_no,s1.name,s1.age);
    printf("%d\t%19s\t%d\n",s2.roll_no,s2.name,s2.age);
    printf("%d\t%19s\t%d\n",s3.roll_no,s3.name,s3.age);
   
    return 0;
}





