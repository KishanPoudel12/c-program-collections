// Write a C program to read two matrices and perform addition and subtraction of two matrices.

#include<stdio.h>

void main()

{

	int a[10][10],b[10][10],c[10][10],d[10][10];

	int i,j,r1,c1,r2,c2;

	printf("\nEnter the number of rows and columns in the matrix A : ");

	printf("\nEnter the number of columns in the matrix A : ");

	scanf("%d%d",&r1,&c1);

	printf("\nEnter the number of rows in the matrix B : ");

		printf("\nEnter the number of columns in the matrix B : ");

	scanf("%d%d",&r2,&c2);

	if((r1!=r2)||(c1!=c2))

	{

		printf(" \nOperation not possible - Matrices are not of the same order");

		// getch();

                //  exit(0);

	}

	else

	{

		printf("\nEnter the matrix A elements\n");

		for(i=0;i<r1;i++)

		for(j=0;j<c1;j++)

		scanf("%d",&a[i][j]);


		printf("\nEnter the matrix B elements\n");

		for(i=0;i<r2;i++)

		for(j=0;j<c2;j++)

		scanf("%d",&b[i][j]);


		for(i=0;i<r1;i++)

		for(j=0;j<c1;j++)

		{

				c[i][j]=a[i][j]+b[i][j];

				d[i][j]=a[i][j]-b[i][j];

			}

		}

		printf("\nSum of the matrix \n");

		for(i=0;i<r2;i++)

		{

			for(j=0;j<c2;j++)

			{

				printf("\t%d",c[i][j]);

			}

			printf("\n");

		}

		printf("The difference of the Matrix \n");

		for(i=0;i<r2;i++)

		{

			for(j=0;j<c2;j++)

			{

				printf("\t%d",d[i][j]);

			}

			printf("\n");

		}


}