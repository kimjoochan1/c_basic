// Casting  : ����ȯ
//  - int(����) �� double(�Ǽ�)

#include <stdio.h>

int num(void) {
    int a = 20, b = 3;
    double res;

    // int �� double (����type �� ū Ÿ��) 
    // 6.7 = 20.0 / 3.0
    res = (double)a / (double)b;
    printf("a = %d, b = %d\n", a, b);
    printf("a/b�� ��� : %.1lf\n", res);

    // double �� int (ū type �� ���� Ÿ��): �ս�
    a = (int)res;
    printf("(int) %.1lf\n�� ��� : %d\n", res, a);

}