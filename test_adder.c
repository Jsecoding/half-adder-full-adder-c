#include <stdio.h>
#include "my_adder.h"

int main() 
{
    int a, b, cin;
    printf("Please enter single-bit binary number A:");  // single-bit / 1-bit
    scanf("%d", &a);
    printf("Please enter single-bit binary number B:");  // single-bit / 1-bit
    scanf("%d", &b);
    printf("Please enter single-bit binary number carry in:");  // single-bit / 1-bit
    scanf("%d", &cin);
    fa_result ret = full_adder(a, b, cin);
    printf("finally sum == %d  carry out == %d\n", ret.sum, ret.carry);
    return 0;
}
