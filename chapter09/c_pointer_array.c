#include <stdio.h>

/**
 *  ������(pointer)�� �迭(array)
 *  - ������, �ְ���, ��ĭä���, ox, ������(1����)
*/

int main(void) {
    int ary[3];  // �迭 ����(3ĭ) ũ��: 12Byte
    int i;       // ���� ũ��: 4Byte
    // �迭 �̸� �� �迭�� ���۹��� ���� �������
    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("3��° �迭 ��� �Է�: ");
    scanf("%d", ary + 2);

    for(i=0; i<3; i++) {
        printf("%d\n", *(ary + i));
    }
}