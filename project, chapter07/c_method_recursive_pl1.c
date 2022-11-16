#include <stdio.h>

int func(int num);
int main(void) {
    // i = 5 3 1 
    // i = 5    Ãâ·Â = func(5): func(5) 
    for(int i=5; i>=0; i--) {
        if(i % 2 == 1) printf("func(%d): %d\n", i, func(i));
    }
}
int func(int num) {
    if(num ==1) {
        return 1;
    } else {
        return num * func(num-1);
    }
}