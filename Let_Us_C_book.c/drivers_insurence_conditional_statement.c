// Example 4.2: A company insures its drivers in the following cases:
//  If the driver is married.
//  If the driver is unmarried, male & above 30 years of age.
//  If the driver is unmarried, female & above 25 years of age. 
#include<stdio.h>
int main(){
    int age;
    int sex,ms;
    printf("Enter the age,sex(1=male && 0=female),maritial status(1=married && 0=unmarried):");
    scanf("%d%d%d",&age,&sex,&ms);
    if((ms==1) || (ms==1 && sex==1 && age>30) || (ms==1 && sex==0 && age>25 )  ){
    printf("The driver is insured");
    }else{
        printf("The driver is not insured");
    }
    return 0;
}