#include <stdio.h>

/**
 * ����Լ��� �ݺ����� ����
 *  - ����Լ��� �ڵ带 �ݺ������� �����ϴ°� ������ �����δ� ���ο� �Լ��� �����ϴ� �Ͱ� ����
 *  - ����Լ��� ���� ȣ���� ���� �ƴ� ������ ȣ���ߴ� ������ ���ư�
 * 
 * main() �� fruit(1) �� fruit(2) �� fruit(3)
 *        �� fruit(1) �� fruit(2) �� return 
*/
void fruit(int count);
int main(void) {
    fruit(1);
}
void fruit(int count) {
    printf("apple\n");
    if(count==3) return;
    fruit(count+1);
    printf("jam\n");
}