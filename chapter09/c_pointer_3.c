#include <stdio.h>

/**
 *  �Ϲ� ���� vs ������ ����
 * 
 *  int a;   # 21����~24����
 *  int *pa;
 *  pa = &a;
 *  *pa = 55;
*/

int main(void) {
    int a = 10, b = 15, total;  // 31����, 32����, 33����
    double avg;                 // 34����
    int *pa, *pb;
    int *pt = &total;    //pt(33����)
    double *pg = &avg;   //pg(34����)

    pa = &a; //pa(31����)
    pb = &b; //pb(32����)

    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("�� ������ ��: %d, %d\n", *pa, *pb);
    printf("�� ������ ��: %d\n", *pt);
    printf("�� ������ ���: %.1lf\n", *pg);
}