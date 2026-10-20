// Q: Swap two integers without a temporary variable and discuss the risks.
#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    // XOR method
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d\n%d\n", a, b);
    printf("Discussion:\nUsing XOR method is only applicable for int data type and less readable.\nMeanwhile arithmatic method can cause overflow if a + b exeeds the range of int data type.");
    return 0;


}