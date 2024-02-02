#include<stdio.h>
int fibo(int n){
    if(n==0||n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n = 4;
    printf("The %d fibonaaci series is %d\n" , n , fibo(n));
    return 0;

}