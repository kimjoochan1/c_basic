#include <stdio.h>

int main(void) {
    int num1 = 20;
    int num2 = 10;
    int num3 = 50;
    int temp;
    // ���� 3���� ���� �ٸ� ���� ����
    //  - ����: num1�� num2�� ���� �ٲ�(ü����)
    // ����: num1 > num2 > num3
    // ����1: num1 < num2 �� �� ��ȯ : num1 > num2 
    // ����2: num1 < num3 �� �� ��ȯ : num1 > num2, num3
    // ����3: num2 < num3 �� �� ��ȯ : num2 > num3
    // �� num1 > num2 > num3

     // �ڵ� ---
        // ü���� �ڵ� �ۼ�
    // �ڵ� ---


    if(num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num1 < num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if(num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("%d > %d > %d", num1, num2, num3);
}