#include <stdio.h>

/**
 * 
 * int main() {
 *  printf("%d", sum(5, 10));
 * }
 *     ��          (return)  
 *     ��              �� 
 *     ��              ��
 * (parameters)       ��
 * int sum(int x, int y) {
 *   return x + y;
 * }
*/
// �Լ� �� (�Ű�����), return
// �Լ� ��     x, return

int get_num(void);

int main(void) {
    printf("��: %d\n", get_num());
}


// void: �ش簪�� ������� ���� ���
int get_num(void) {
    int num;
    printf("number: ");
    scanf("%d", &num);
    return num;
}