#include <stdio.h>

// 1~1o까지 반복하면서 짝수만 출력하는 코드 작성

// 짝수 판별 : 2로 나눠서 나머지(%)가 0이면 짝수
int main(void) {
    int a;
    for(int i=1; i<=10; i++) {
        if(i % 2 == 0) { //짝수 판별
            printf("%d\n", i);
        }
    }
}