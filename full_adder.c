#include <stdio.h>
#include "my_adder.h"

// typedef struct
// {
//     int sum;
//     int carry;
// } fa_result;

fa_result full_adder(int a, int b, int cin)
{
    int s1, c1, s2, c2;
    half_adder(a, b, &s1, &c1);
    half_adder(s1, cin, &s2, &c2);
    fa_result ret;
    ret.sum = s2;
    ret.carry = or(c1, c2);
    return ret;
}

// 通过两个半加器，实现全加器
//int main() 
//{
//    int a = 0;
//    int b = 0;
//    int sum = 0;
//    int carry = 0;
//    int summ = 0;
//    int carry_out = 0;
//    int cin = 0;
//    printf("Please enter one-binary number A:");
//    scanf("%d", &a);
//    printf("Please enter one-binary number B:");
//    scanf("%d", &b);
//    printf("Please enter one-binary number cin:");
//    scanf("%d", &cin);
//    half_adder(a, b, &sum, &carry);  // 这里的sum相当于A+B，carry相当于carry in
//    // printf("carry == %d\n", carry);
//    half_adder(sum, cin, &summ, &carry_out);
//    int carry_result = or(carry, carry_out);
//    printf("sum == %d, carry out == %d\n", summ, carry_result);    
//    return 0;
//}
