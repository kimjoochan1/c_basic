#include <stdio.h>

int main(void) {
    int n = recursion(16);
    printf("%d\n", n);
}

int recursion(int n) {
    //if�� {���๮} �� ������ ���ΰ�� ����
    // ���๮�� 1���� {}�� ����
    if(n<5) return 1;
    else if(n%5 == 1) return n+recursion(n-1);
    else recursion(n-1);
}