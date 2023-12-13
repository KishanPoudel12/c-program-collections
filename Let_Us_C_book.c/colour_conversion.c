/*
In digital world colors are specified in Red-Green-Blue (RGB) format,
with values of R, G, B varying on an integer scale from 0 to 255. In
print publishing the colors are mentioned in Cyan-Magenta-YellowBlack (CMYK) format, with values of C, M, Y, and K varying on a real
scale from 0.0 to 1.0. Write a program that converts RGB color to
CMYK color as per the following formulae:
White = Max(Red / 255,Green / 255,Blue / 255) ;


Note that if the RGB values are all 0, then the CMY values
are all 0 and the K value is 1.
*/

// p-76,let us c learn functions and do it
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
float white,red,green,blue ,Cyan,Magenta,
Yellow,Black;
printf("Enter the value of red light ,green light ,blue light(0-255) :");
scanf("%f%f%f",&red,&green,&blue);
 white=max(red/255 ,green/255 , blue/255);
if (red==0 && green ==0 && blue ==0){
    Black=1;
}
else {
    Cyan =(white -(red/225))/white;
    Magenta=(white -(green/225))/white;
    Yellow=(white -(blue/225))/white;
    Black=1-white;

}
printf("CMYK = %f %f %f %f",Cyan,Magenta,Yellow,Black);
    return 0;
}

