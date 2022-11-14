#include <stdio.h>

void fruit(int count);

int main(void) {
    fruit(1);
}
void fruit(int count) {
    printf("apple\n");
    if(count == 3) {
        return;
    }
    fruit(count+1);
}