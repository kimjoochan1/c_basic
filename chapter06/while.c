#include <stdio.h>


/**
 *  �ݺ���
 *      - ������ �����ϴ� ���� �ݺ��ؼ� ����
 *  1) while��  - �ݺ�Ƚ�� ��
 *  2) for��    - �ݺ�Ƚ���� ������ ���
 * 
 *  ��: Ű����ũ(while��)
*/
int main(void) {
    int a= 1;

    while(a < 10) {
        a = a*2;
    }
    printf("a: %d\n", a);
}