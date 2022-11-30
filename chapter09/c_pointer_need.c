#include <stdio.h>

/**
 *  포인터를 사용하는 이유
 *   - 변수를 사영하는 가장 쉬운방법은 변수이름 호출
 *     (int num = 4; → num) (편함)
 *  - 포인터 사용 → 추가적으로 변수선언, 주소연산, 간접참조 등 각종연산 수행해야함
 *   (불편)
 *  - 포인터를 즐겨 사용할 필요 없음!
 *  - 임베디드 프로그래밍 할 때 메모리에 직접 접근하는 경우 또는 동적 할당 메모리를 사용하는 셩우에는 포인터가 반드시 필요험
*/
void swap(int *pa, int *pb);

int main(void) {
    int a = 10, b = 20;

    /**
     *  함수의 매개변수(parameter) 전달 할 때 방법 3가지
     *  1. Call by value: 값을 복하 전달
     *  2. Call by reference: 값이 위치한 주소를 전달
     *  3. Call by assignment: 자료형에 따라 1, 2를 섞어서 사용
    */

    // 포인터: 다수의 함수 내에서 값을 공유
    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);
    
}

/**
 *  교환(swap)작업은 swap()함수 내에서 포인터를 통해 진행되지만 실제로 바뀌는 값은 main()함수의 변수 a와 b
 *  swap()함수는 포인터를 통해 main()함수의 변수 a, b를 공유(두 변수를 직접 바꾸는 일은 가능)
 *  → C언어가 Call by value기 때문에 포인터를 사용하지 않고 값을 전달하면 갑이 copy돼서 전달되기 때문에 겅유 불가!
*/

void swap(int *pa, int *pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}