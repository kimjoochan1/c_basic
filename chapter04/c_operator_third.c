#include <stdio.h>

int num(void)
{
    int a = 10, b = 20, res;

    // ���⿬���� = (����) ? ��1 : ��2
    res = (a > b) ? a : b;
    printf("ū ��: %d\n", res);
    
}