#include <stdio.h>

void print_char(char ch, int count);

int main(void) {
    print_char('*', 3);
}

void print_char(char ch, int count) {
    for(int i=0; i<count; i++) {
        printf("%c", ch);
    }
    // �Լ��� ȣ���ϰ� ����Ǹ� �ٽ� ȣ���ߴ� ������ ������
    // 1. �Լ� ���� �� return���� ������ ����
    // 2. �Լ� ���� �� }�� ������ ����
    return;
}