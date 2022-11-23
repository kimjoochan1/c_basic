#include <stdio.h>

/**
 *  함수, 배열, 포인터
 *  변수: 하나의 값을 저장하는 메모릴 공간
 *  - int num = 4;
 *  → 실제 메모리
 *      - int(4 Byte) → 10번지~13번지
 *  배열: 다수의 값을 저장하는 메모리 공간(변수 여러개 붙여서 사용하는 것과 동일)
 *  - int num[3] = {1, 2, 3};
 *  → 실제 메모리
 *      - int(4 Byte) x 3 → 10~21번지
 *        [0] → 10번지~13번지(4 Byte)
 *        [1] → 14번지~17번지(4 Byte)
 *        [2] → 18번지~21번지(4 Byte)
 * 
 *  주소연산자(&)
 *   - int num; # 20번지~23번지
 *   - scanf("%d", &num);
 *   - &num → num 변수의 시작번지(20번지)
*/

int main(void) {
    int a; // 4 Byte
    double b; // 8 Byte
    char c; // 1 Byte

    printf("a 변수 주소: %u\n", &a);
    printf("b 변수 주소: %u\n", &b);
    printf("c 변수 주소: %u\n", &c);
}