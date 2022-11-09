#include <stdio.h>

/**
 * 
 * int main() {
 *  printf("%d", sum(5, 10));
 * }
 *     ↓          (return)  
 *     ↓              ↑ 
 *     ↓              ↑
 * (parameters)       ↑
 * int sum(int x, int y) {
 *   return x + y;
 * }
*/
// 함수 → (매개변수), return
// 함수 →     x, return

int get_num(void);

int main(void) {
    printf("값: %d\n", get_num());
}


// void: 해당값을 사용하지 않을 경우
int get_num(void) {
    int num;
    printf("number: ");
    scanf("%d", &num);
    return num;
}