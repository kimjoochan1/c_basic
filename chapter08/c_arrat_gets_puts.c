#include <stdio.h>

// ���ڿ� �迭 �� gets(), puts()
//  - gets() �� ��ĭ�� �����ؼ� ���ڿ� �Է�
//  - puts() �� �迭�� ����� ���ڿ� ��� printf()��� ��� ���� �ڵ��������� �߰�(\n)
int main(void) {
    char str[80];

    printf("���ڿ� �Է� : ");
    // scanf("%s", str); �� gets(str)
    gets(str);
    puts("�Էµ� ���ڿ� : "); // + ���ٰ���(\n)
    // printf("����: %d", num) �� puts() ��� �Ұ�
    puts(str);
}