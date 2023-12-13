/*
A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600

The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel under
consideration and output the grade of the steel.
*/
#include<stdio.h>                    //Check it once
int main(){
    char c_1,c_2,c_3;
    printf("Enter 1 for yes and 0 for no ");
    printf("\nIs the hardness greater than 50 :");
    scanf("%d",&c_1);
    
    printf("\nIs the carbon content greater than 0.7 :");
    scanf("%d",&c_2);
    printf("\nIs the tensile strength greater than 5600 :");
    scanf("%d",&c_3);
         if (c_1==1 && c_2 ==1 && c_3==1){
    printf("\nGrade=10");
    }
    else if(c_1==1 && c_2 ==1 && c_3==0){
    printf("\nGrade=9");
    }
    else if(c_1==0 && c_2 ==1 && c_3==1){
    printf("\nGrade=8");
    }
    else if(c_1==1 && c_2 ==0 && c_3==1){
    printf("\nGrade=7");
    }
  else if(c_1==1 && c_2 ==0 && c_3==0){
    printf("\nGrade=6");
    }
     else if(c_1==0 && c_2 ==0 && c_3==1){
    printf("\nGrade=6");
     }
     else if(c_1==0 && c_2 ==1 && c_3==0){
    printf("\nGrade=6");
     }
    else if(c_1==0 && c_2 ==0 && c_3==0){
    printf("\nGrade=5");
    }
    return 0;
}


// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     /*
//     h = Hardness of steel
//     cc = Carbon content
//     ts = Tensile strength
//     */
//     float h, cc, ts;
//     //    flags for three conditions
//     int h_f=0, cc_f=0, ts_f=0;  //here 0 represent False and one represent for True
//     int grade;
//     printf("Enter the value of Hardness: ");
//     scanf("%f", &h);

//     printf("Enter the value of Carbon Content: ");
//     scanf("%f", &cc);

//     printf("Enter the value of Tensile Strength: ");
//     scanf("%f", &ts);

//     //For first three conditional
//     if (h>50)
//         h_f=1;
//     if (cc<0.7)
//         cc_f=1;
//     if (ts>5600)
//         ts_f=1;

//     //For Finding Grade
//     //1. if none of the conditions are met
//     if(h_f==0 && cc_f==0 && ts_f==0)
//         grade = 5;

//     //2. if only one condition is met
//     if(h_f==1 || cc_f==1 || ts==1)
//         grade = 6;

//     //3 if condition (i) and (iii) are met
//     if(h_f==1 && cc_f==0 && ts_f==1)
//         grade = 7;

//     //4. if conditions (ii) and (iii) are met
//     if(h_f==0 && cc_f==1 && ts_f==1)
//         grade = 8;

//     //5. if conditions (i) and (ii) are met
//     if(h_f==1 && cc_f==1 && ts_f==0)
//         grade = 9;

//     //6. if all the three conditions are met
//     if(h_f==1 && cc_f==1 && ts_f==1)
//         grade = 10;

//     printf("The grade of steel is: %d", grade);
//     return 0;
// }