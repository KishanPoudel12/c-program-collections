/* Write a program to receive values of latitude (L1, L2) and longitude (G1, G2), in degrees, of two places on
 the earth and output the distance (D) between them in nautical miles */
#include<stdio.h>
#include<math.h>
int main(){
    float d,Dl,Dg;
    float L1,L2;
    float G1,G2;
    float distance_nm;
    float distance_km;
    printf("Enter the coordinates of latitute(L1,L2)");
    scanf("%f %f",&L1,&L2);
    printf("Enter the coordinates of longitude(G1,G2)");
    scanf("%f %f",&G1,&G2);
    Dl=L1-L2;
    Dg=G1-G2;
    d=sqrt((Dl*Dl)+(Dg)*(Dg));
    distance_km=d*100;
    printf("The distance in Km  is %f",distance_km);
    distance_nm =distance_km/1.852;
    printf("\nThe nautical miles is %f",distance_nm);
    return 0;
}