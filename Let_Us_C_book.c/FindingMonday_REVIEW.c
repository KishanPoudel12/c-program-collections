/*
According to the Gregorian calendar, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year
*/


//Learn the concept of functions first 


#include <stdio.h>
int checkLeapYear(int year)
{
    if (year % 4 == 0 || year % 400 == 0)
    {
      
        return 1;
     
    }
    else
    return 0;
}

int main(){ 
    int diff, year, leapY, days, total_days, leap_count,i;
    printf("Enter the year :");
    scanf("%d", &year);
    printf("The given year is %d\n", year);
    diff = year - 1; 

    for (i == 0001; i < diff; i++)
    {
        if (checkLeapYear(i))
        {
            leap_count = leap_count++;
        }
    }
                                                 // year difference                    
    total_days = diff * 365 + leap_count;        // Find the total no of days
    days = total_days % 7;
    if (days == 0)
        printf("Monday");
    else if (days == 1)
        printf("Tuesday");
    else if (days == 2)
        printf("Wednesday");
    else if (days == 3)
        printf("Thursday");
    else if (days == 4)
        printf("Friday");
    else if (days == 5)
        printf("Saturday");
    else if (days == 6)
        printf("Sunday");
    return 0;
}