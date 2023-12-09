#include<stdio.h>
float pi =3.14;   //Global decleration section 
int main(){
float radius ,volume ;   //Radius can be decimal
printf("Enter the radius :");
scanf("%f",&radius);
volume=(4*pi*radius*radius*radius)/3;
printf("The volume of the sphere is %f",volume);
return 0;
}