#include <stdio.h>

// 문자열 배열 → gets(), puts()
//  - gets() → 빈칸을 포함해서 문자열 입력
//  - puts() → 배열에 저장된 문자열 출력 printf()대신 사용 가능 자동개행기능이 추가(\n)
int main(void) {
    char str[80];

    printf("문자열 입력 : ");
    // scanf("%s", str); → gets(str)
    gets(str);
    puts("입력된 문자열 : "); // + 한줄개행(\n)
    // printf("숫자: %d", num) → puts() 사용 불가
    puts(str);
}