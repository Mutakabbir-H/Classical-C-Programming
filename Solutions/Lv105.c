// Q:  Convert total seconds into hours, minutes and seconds.
#include<stdio.h>
int main()
{
    int total_seconds;
    printf("Enter seconds:");
    scanf("%d", &total_seconds);
    int hour = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    int minute = total_seconds / 60;
    total_seconds = total_seconds % 60;
    int seconds = total_seconds;
    printf("%d Hours %d minutes %d seconds", hour, minute, seconds);
    return 0;

}