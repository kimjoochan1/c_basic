#include <stdio.h>

int main(void)  {
    char grade;     // ����(���ڿ�) :char
    char name[20];  // �̸�(���ڿ���) :char �迭

    printf("���� �Է�: ");
    scanf("%c", &grade);
    printf("�̸� �Է�: ");
    scanf("%s", name);

    printf("%s�� ������ %c�Դϴ�.\n", name, grade);

}