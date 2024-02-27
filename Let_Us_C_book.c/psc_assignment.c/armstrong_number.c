#include <stdio.h> //check this out
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
       
       
       
        remainder = originalNum % 10;
        
       result = result + remainder * remainder * remainder;
        
       // removing last digit fro
    //    m the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
// if(num!=0){
//     count=count+1;
//     num/10;
// }
