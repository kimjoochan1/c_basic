#include <stdio.h>

/**
 *  포인터 대입 규칙
 *  - 포인터는 가리키는 변수와 형태가 같을 때만 대입
 *  - 형 변환을 사용한 대입은 가능
 *   double a = 3.4;
 *   double *pd = &a;
 *   int *pi;
 *   pi = (int *)pd;
 *    → pd를 int형 변수의 주소로 형 변환
*/

int main(void) {
    int a = 10;    // a(100번지)
    int *p = &a;   // p(100번지)
    double *pd;    // pd(주소)
    // pd = p; (x)
    pd = (double *)p; // (o) 형변환
    printf("%lf\n", *pd);
}