// Q: Swap two integers using a temporary variable.
#include<stdio.h>
int main()
{
    int var1,var2, temp;
    printf("Enter any two value:\n");
    scanf("%d %d", &var1, &var2);
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("%d %d", var1, var2);
    return 0;
    

}