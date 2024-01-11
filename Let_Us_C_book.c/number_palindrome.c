//program to check whether a given number is palindrome or not

#include<stdio.h>

void main()

{

	int m,n,s=0,r;

	// clrscr();

	printf("\nEnter the number : ");

	scanf("%d",&n);

	m=n;

	while(n>0)

	{

		r=n%10;

		n=n/10;

		s=s*10+r;

	}

	if(s==m)

		printf("\n %d is a palindrome number",m);

	else

		printf("\n %d is not a palindrome number",m);

	// getch();

}