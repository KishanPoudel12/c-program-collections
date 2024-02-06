# include<stdio.h>
#include<math.h>
int sumofarray(int *arr , int n){
int sum = 0;
for(int i = 0; i<n; i++){
    sum = sum+ *(arr+i);
}
return sum;
}
float calmean(int arr[] , int n){
    float mean = sumofarray(&arr[0], n);
    return mean/n;
}
float std(int* arr , int n){
    float mean=calmean(arr,n);
    double squarediff=0;
    for(int i=0;i<n;i++)
    {
        double diff =*(arr+i)-mean;
        squarediff += diff*diff;
    }
    return sqrt(squarediff/n);

}
int main(){
int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
printf("The smd of an array is %lf \n",std(arr,n));
return 0;
}