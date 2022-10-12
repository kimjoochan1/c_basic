#include <stdio.h>

/**
 * if문(제어문) 기본 문법
 * 
 * if(조건) {
 *    실행문
 * } else if (조건) {
 *    실행문
 * } else {
 *    실행문
 * }
 * else, if 는 1개만 가능  else if 는 여러개 가능
 * 체인으로 연결
 * 조건이 참이면 실행문 실행 거짓이면 실행x 그리고 아래로 내려감  조건 만족 할 때 까지 내려감
*/
int main(void) {
    int a = 20;
    int b = 0;

    // 조건을 보고
    // 참(True) 블록문 안에 있는 코드 실행
    // 거짓(False) 다음으로 넘어감
    if(a > 30) {
        printf("a가 30보다 커요!");
    } 
}