
/* 
Write a program to calculate the salary as per the
following table:

Gender    Years of Service    Qualifications         Salary
Male      >= 10               Post-Graduate          15000
          >= 10               Graduate               10000
          < 10                Post-Graduate          10000 
          < 10                Graduate               7000

Female     >= 10              Post-Graduate          12000 
           >= 10              Graduate               9000 
           < 10               Post-Graduate          10000
           < 10               Graduate               600
*/
#include<stdio.h>
int main(){
    int yos,q;
    char g;
    printf("Enter the gender ,years of experience and qualification(PG=1,G=0) :");
    scanf("%c%d%d",&g,&yos,&q);
    if(yos>=10 && q==1 && g=='m'){
        printf("Salary is 15000rs");
    }
    else if(yos>=10 && q==1 && g=='f'){
        printf("salary is 12000rs");
    }
    else if(yos>=10 && q==0 && g=='m'){
        printf("salary is 10000rs");
    }
    else if(yos>=10 && q==0 && g=='f'){
        printf("salary is 9000rs");
    }
    else if(yos<10 && q==1 && g=='m'){
        printf("salary is 10000rs");
    }
    else if(yos<10 && q==1 && g=='f'){
        printf("salary is 10000rs");
    }
    else if(yos<10 && q==0 && g=='m'){
        printf("salary is 7000rs");
    }
    else if(yos<10 && q==0 && g=='f'){
        printf("salary is 600rs");
    }
    return 0;
}

