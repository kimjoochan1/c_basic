#include <stdio.h>

/**
 *  배열명과 포인터의 차이
 *    - 포인터는 주소를 저장할 수 있는 변수
 *     → 다른 주소를 얼마든지 담을 수 있음(값 변경 가능)
 *    -  배열명은 주소 → 주소는 상수
 *     → 상수는 값 변경 불가(배열명은 값 변경 불가)
 * 
 *   ex) pa = pa + 1;
 *       pa++     (가능, 포인터 변경 가능)
 *   ex) ary = ayr + 1;
 *       ary++    (불가능, 배열은 상수)
 *   ex) const int num = 4;
 *       num = 5; (불가능, num은 상수, 상수는 좌측에 x)
 * 
 *    - sizeof() → ()안의 값의 Byte 크기
 *    - 배열명은 배열의 전체 크기
 *    - 포인터는 포인터 하나의 크기를 구함
*/

int main(void) {
    int ary[3] = {10, 20 ,30};
    int *pa = ary;
    printf("배열의 값: ");
    for(int i=0; i<3; i++) {
        printf("%d\n", *pa);
        pa++;
    }
}