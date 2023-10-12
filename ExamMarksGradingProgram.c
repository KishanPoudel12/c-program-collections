#include<stdio.h>
int main(){
int S,M,E; //(Science ,Math , English )
float A;     //Average  
printf("Enter marks(Science ,Math , English ) :");
scanf("%d%d%d",&S,&M,&E);
A=(S+M+E)/3;
if(A>90 && A<=100){
    printf("A");
}
if(A>80 && A<=89){
    printf("B");
}
if(A>70 && A<=79){
    printf("C");
}
if(A>60 && A<=69){
    printf("D");

}
if(A>50 && A<=59){
    printf("E");
}
if(A>0 && A<=49){
    printf("F");
}
  return 0; 

}