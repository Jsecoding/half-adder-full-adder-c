#pragma once

typedef struct
{
    int sum;
    int carry;
} fa_result;

int and(int a, int b);
int or(int a, int b);
int not(int in); 
int xor(int a, int b);
int nand(int a, int b);
int nor(int a, int b);

void half_adder(int a, int b, int *sum, int *carry);  // using pointer to deliver value (passing parameters by reference)

fa_result full_adder(int a, int b, int cin);  // fa: full adder  using struct
