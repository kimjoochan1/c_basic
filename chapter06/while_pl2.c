#include <stdio.h>

// ¦�� ����, Ȧ�� ������ ���
int main(void) {
    int even_total = 0;
    int odd_total = 0;

    // for��
    for(int i=1; i<=100; i++) {
        if(i % 2 ==0) {
            even_total += i;
        } else {
            odd_total += i;
        }
    }

    //while�� 
    int num = 1;
    while(num <= 100) {
        if(num % 2 == 0) {
            even_total += num;
        } else {
            odd_total += num;
        }
        num++
    }
}