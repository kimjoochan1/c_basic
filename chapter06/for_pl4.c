#include <stdio.h>

// i=1 �� j=0 *
// i=2 �� j=0 **
// i=3 �� j=0 ***
// i=4 �� j=0 ****
// i=5 �� j=0 *****
int main(void) {
    // 1. 5�� �ݺ�
    for(int i=1; i<=5; i++) {
        // 2. ���� ������ �ݺ�
        for(int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
}