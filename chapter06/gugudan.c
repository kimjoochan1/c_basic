#include <stdio.h>

/**
 * 구구단 2단 출력
 * 2 x 1 = 2
 * 2 x 2 = 4
 * 2 x 3 = 6
 * 2 x 4 = 8
 *  ...
 * 2 x 9 = 18
*/

int main(void) {
    for(int i=1; i <= 9; i++) {
        printf("2 x %d = %d\n", i, 2 * i);
        
    }

}