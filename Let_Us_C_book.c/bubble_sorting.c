//Program to arrange the elements in ascending order using Bubble sort technique*/

#include<stdio.h>

void main()

  {

          int a[100],i,j,n,temp;

        //   clrscr();

          printf("Enter the number of elements\n");

          scanf("%d",&n);

          printf("Enter the elements\n");

          for(i=0;i<n;i++)

                    scanf("%d",&a[i]);

          printf("Unsorted list\n");

          for(i=0;i<n;i++)

                    printf("%d\t",a[i]);

          for(i=0;i<n-1;i++)

          {

                     for(j=0;j<n-i-1;j++)

                     {

                               if(a[j]>=a[j+1])

                               {

                                          temp=a[j];

                                          a[j]=a[j+1];

                                          a[j+1]=temp;

                               }

                       }

          }

          printf("\nSorted list\n");

          for(i=0;i<n;i++)

                    printf("%d\t",a[i]);

        //   getch();

  }