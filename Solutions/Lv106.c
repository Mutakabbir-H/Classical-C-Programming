// Q: Convert total days into years, weeks and days.
#include<stdio.h>
int main()
{
    int days;
    printf("Enter days:");
    scanf("%d",&days);
    int year = days / 365;
    days = days % 365;
    int week = days / 7;
    days = days % 7;
    printf("Year: %d Week: %d Days: %d", year, week, days);
    return 0;   
}