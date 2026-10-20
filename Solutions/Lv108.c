// Q: Convert kilograms into grams and milligrams.
#include<stdio.h>
int main()
{
    long int kilo, gram, milli;
    printf("Enter kilogram:");
    scanf("%d", &kilo);
    gram = kilo*1000;
    milli = gram*1000;
    printf("Grams: %d\nmilligrams: %d", gram, milli);
    return 0;

}