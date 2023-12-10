/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters*/

#include<stdio.h>
int main(){
float dist;
printf("Enter the distance in Km :");
scanf("%f",&dist);
printf("The distance is %f km\n",dist); 
printf("The distance is %f meters\n",dist*1000);
printf("The distance is %f feets\n ",dist*1000*3.28084);   // 1m =3.28084feet
printf("The distance is %f inches\n",dist*39370.1);        // 1km =39,370inches
printf("The distance is %f centimeters\n",dist*1000*100);  //1m =100cm
return 0;
}