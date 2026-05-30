#include <stdio.h>
#include "my_adder.h"

void half_adder(int a, int b, int *sum, int *carry)
{
    *sum = xor(a, b);
    *carry = and(a, b);
}

//int main() 
//{
//    int a;
//    int b;
//    // scanf returns the number of successfully read arguments.
//    printf("Please enter one-binary A:");
//    scanf("%d", &a);
//    printf("Please enter one-binary B:");
//    scanf("%d", &b);
//    int sum = xor(a, b);
//    int cout = and(a, b);
//    printf("sum is %d\ncout is %d\n", sum, cout);
//    return 0;
//}
