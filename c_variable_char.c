#include <stdio.h>   // 기본 입력, 출력 코드
#include <string.h>  // 문자열을 다룰 수 있는 코드
                     // .h : header file 의미

/**
 *  char 배열명[문자길이 + 1] = 문자열;
 *   + 문자열길이+1의 이유는 문자열의 끝에 '\0(널 문자) 자동으로 추가
 *   + 기본자료형을 여러개 묶어서 사용하는 것을 '배열' 이라고 함
 *   ※ 배열은 선언된 이후에 대입연산자로 값 입력 불가
 *     → strcpy(string copy) 함수 사용하면 가능
 *       strcpy() : 문자열 복사
 *  '' : 문자형(char)
 *  "" : 문자열형(string)
*/

int main(void)
{
    char fruit[20] = "strawberry";

    printf("딸기: %s\n", fruit);
    printf("딸기잼: %s %s\n", fruit, "jam");

    // fruit = "banana";    // 사용불가 
    strcpy(fruit, "banana");
    printf("%s\n", fruit);
}