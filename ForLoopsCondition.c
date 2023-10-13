// What happens when we add a semi colon  after for the for loops
#include<stdio.h>
int main(){
    int a,b;         
    for(a=10,b=0;a<=10,b<=10;a--,b++);      //Here a semi colon is added 
    {                                  
        printf("a=%d b=%d\n",a,b);
 }                                      // Analyse the result
    return 0;

} 