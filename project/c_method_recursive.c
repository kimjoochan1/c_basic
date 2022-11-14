#include <stdio.h>

/**
 * 재귀함수(recursive function)
 *   - 자기자신을 호출하는 함수
 * 
*/

void fruit(void);

int main(void) {
    fruit();
}

void fruit(void) {
    printf("apple\n");
    fruit();
}