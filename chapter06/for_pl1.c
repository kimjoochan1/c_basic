#include <stdio.h>

// 1~10�� ���� ���� ���
int main(void) {
    int sum = 0; // ���� ����

    // �ۼ��غ�����.(for�� Ȱ��)

    for(int i=1; i<=10; i++) {
        sum = sum + i;
        // sum += 1;
        }

    printf("���� ����: %d\n", sum);
}