/*
 If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three
 */
 #include<stdio.h>
 int main(){
    int age1=0,age2=0,age3=0;
    printf("Enter the age of Ram :");
    scanf("%d",&age1);
    printf("Enter the age of Ajay :");
    scanf("%d",&age2);
    printf("Enter the age of shyam :");
    scanf("%d",&age3);
    if(age1>age2&age1>age3){
      printf("Ram is greater");
    }
    else if(age2>age1&age2>age3){
      printf("Ajay is greater");
    }
    else if(age3>age1&age3>age2){
      printf("Shyam is greater");
    }
    else{
      printf("Equal");
    }
    return 0;
 }

// #include<stdio.h>
//  int main(){ 
//  int a,b,c,big;
//  printf("Enter the value of a,b,c :");
//  scanf("%d%d%d",&a,&b,&c);
//  big=   a>b ? ( (a>c)?printf("%d",a) : printf("%d",b) ): ( (b>c) ? printf("%d",b) : printf("%d",c) ) ;
//  printf("\n%d",big);
//  return 0;
//  }
//Why is it returning extra 1?