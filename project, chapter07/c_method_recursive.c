#include <stdio.h>

/**
 * ����Լ�(recursive function)
 *   - �ڱ��ڽ��� ȣ���ϴ� �Լ�
 * 
*/

void fruit(void);

int main(void) {
    fruit();
}

void fruit(void) {
    printf("apple\n");
    fruit();
}