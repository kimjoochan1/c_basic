#include <stdio.h>
#include <string.h>

/**
 *   �迭���� ���Կ�����(=) �ʱ�ȭ �����ϰ� ���Ұ�
 *   int num[3] = {1, 2, 3};
 *   num[0] = 15;
 *   num[2] = 25;
 * 
 *   char animal[10] = "cat";
 *   animal[0] = "d";
 *   animal[1] = "o";
 *   animal[2] = "g";
 *   �ſ� ���� �� strcpy() ����ϸ� ��
*/
int main(void) {
    char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);
}