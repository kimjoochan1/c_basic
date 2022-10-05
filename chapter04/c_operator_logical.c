/**
 * 논리연산자
 * 1. AND(&&)
 *      - 두 조건이 모두 참인 경우에만 참!
 * 조건1 | 조건2 | 결과
 * False | False | False
 * True  | False | False
 * False | True  | False
 * True  | True  | True
 * 
 * 2.OR(||)
 *      - 조건 중에 1개라도 참이면 참!
 * 조건1 | 조건2 | 결과
 * False | False | False
 * True  | False | True
 * False | True  | True
 * True  | True  | True
 * 
 * 
 * %%, %
 * ||, |
 * 
 * 1개 썼을 때와 2개 썼을 때의 차이점은?
 *  - 1개(&, |): 2개의 조건을 모두 검사 후 결과 도출
 *  - 2개(&&, ||): 1개의 조건으로 만족하면 결과 도출
 * 
*/
#include <stdio.h>

int main(void)
{
    int a = 30;
    int res;

    res = (a > 10) && (a < 20);
    printf("(a > 10) && (a < 20) : %d\n", res);
    res = (a < 10) || (a > 20);
    printf("(a < 10) || (a > 20) : %d\n", res);
    res = !(a >= 30);
    printf("!(a >= 30) : %d\n", res);
}
