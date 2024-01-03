#include<stdio.h>

int fibon(int);

void main()

{

int num,i;

// clrscr();

printf("Enter the number of terms to generate\n");

scanf("%d",&num);

for(i=0;i<num;i++)

{

 printf("%d\t",fibon(i));

}

// getch();

}

/*fibon definition*/

int fibon(int n)

{

if(n==0)

                         return 0;

if(n==1)

                        return(1);

else

                        return(fibon(n-1)+fibon(n-2));

}