#include <stdio.h>
#include <string.h>

/**
 *   배열에는 대입연산자(=) 초기화 제외하고 사용불가
 *   int num[3] = {1, 2, 3};
 *   num[0] = 15;
 *   num[2] = 25;
 * 
 *   char animal[10] = "cat";
 *   animal[0] = "d";
 *   animal[1] = "o";
 *   animal[2] = "g";
 *   매우 불편 → strcpy() 사용하면 편리
*/
int main(void) {
    char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);
}