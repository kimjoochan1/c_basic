#include <stdio.h>

int main(void) {
    int num;
    int total = 0;

    printf("숫자 입력: ");
    scanf("%d", &num);

    while(num > 0) {
        total += (num % 10);
        num = num / 10;
    }
    printf("총합: %d\n", total);
}