#include <stdio.h>

int main(void)  {
    int a, b;
    int sum, sub, mul, inv;

    a = 10;
    b = 20;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    inv = -a;   // a: +10/ -a: -10

    printf("%d", inv);
}