#include <stdio.h>

/**
 *  1.while
 *    - dowhile: 반복하면서 실행하는 실행문을 반드시 최초 1회는 사용해야 할때
 * 
 *   : while → 첫번째 반복 조건x → 실행문 0회 실행
 *   : dowhile → 첫번째 반복 조건 x → 실행문 1회 실행
 *  2. for
*/
int main(void) {
    // 1.while문
    // while(조건) {
    //  실행;
    //}
    
    //2. dowhile문
    int a = 1;
    do{
        a = a*2;
    } while(a < 10);
    printf("a: %d\n", a);
}