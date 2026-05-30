#include "my_adder.h"

int and(int a, int b)
{
    return a & b;
}

int or(int a, int b)
{
    return a | b;
}

int not(int in)
{
    return 1 - in;
}

int xor(int a, int b)
{
    return a ^ b;
}

int nand(int a, int b)
{
    return not(and(a, b));
}

int nor(int a, int b)
{
    return not(or(a, b));
}
