#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("첫 번째 수: ");
    scanf("%d", &num1);
    printf("두 번째 수: ");
    scanf("%d", &num2);

    printf("%d, %d \n", num1, num2);

    // 조건 
    // 1. 수1이 수2보다 큰경우 출력
    // 2. 수1이 수2보다 작은경우 출력
    // 3. 수1이 수2와 같다 출력
    // → 조건문! 만들어보세요

    if(num1 > num2) {
        printf("%d가 %d보다 크다.", num1, num2);
    } else if(num1 < num2) {
        printf("%d가 %d보다 작다");
    } else {
        printf("%d와 %d가 같다.", num1, num2);
    }
}