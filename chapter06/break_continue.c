#include <stdio.h>
/**
 * Break & Continue ��
 *   - �ݺ������� �ַ� ���
 * 
 *   - break: ��� �ݺ����� ���������� �� ���ķ� �ݺ��� ���� X
 *   - continue: ��� ���� �ݺ����� �Ѿ�� �� ���ķ� �ݺ��� ���� O
*/
int main(void) {
    for(int i=1; i<=10; i++) {
        if(i % 2 ==0) {
            continue;
        }
        if(i == 7) {
            break;
        }
        printf("%d\n", i);
    }

    int num = 1;
    while(num <= 100) {
        if(num % 2 ==0) {
            even_total += num;
        } else {
            odd_total += num;
        }
    }
}