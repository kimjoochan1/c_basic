#include <stdio.h>

// �迭�� ���� ������ ���� �� ��ü ��� �� �ݺ���(for)
int main(void) {
    int score[5]; // index 0~4
    int total = 0;
    double avg;

    for(int i=0; i<5; i++) {
        printf("%d: ", i);
        scanf("%d", &score[i]);
    }
    for(int i=0; i<5; i++) {
        total += score[i];
    }
    avg = total / 5.0;
    printf("��� ����: %.1lf", avg);
}