#include <stdio.h>

void print_char(char ch, int count);

int main(void) {
    print_char('*', 3);
}

void print_char(char ch, int count) {
    for(int i=0; i<count; i++) {
        printf("%c", ch);
    }
    // 함수를 호출하고 종료되면 다시 호출했던 곳으로 돌아함
    // 1. 함수 종료 → return문을 만나면 종료
    // 2. 함수 종료 → }을 만나면 종료
    return;
}