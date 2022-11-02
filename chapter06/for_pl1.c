#include <stdio.h>

// 1~10의 값의 총합 계산
int main(void) {
    int sum = 0; // 총합 누적

    // 작성해보세요.(for문 활욜)

    for(int i=1; i<=10; i++) {
        sum = sum + i;
        // sum += 1;
        }

    printf("누적 총합: %d\n", sum);
}