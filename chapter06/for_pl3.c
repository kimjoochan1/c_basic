#include <stdio.h>

// 1~1o���� �ݺ��ϸ鼭 ¦���� ����ϴ� �ڵ� �ۼ�

// ¦�� �Ǻ� : 2�� ������ ������(%)�� 0�̸� ¦��
int main(void) {
    int a;
    for(int i=1; i<=10; i++) {
        // if(0) �� False
        // if(1) �� True
        if(i % 2) { //¦�� �Ǻ�
            printf("Ȧ��\n");
        } else {
            printf("¦��\n");
        }
    }
}