#include <stdio.h>
#include <string.h>

/**
 * BMI����
 *  1. ����� �� ����, ������
 *  2. ����ȯ �� cm(M)
 *  3. BMI ���
 *  4. BMT�� ���� ��� �ο�
 *  5. ���: BMI���
*/

int main(void) {
    // 1.�Է�
    int height; // ����(cm)
    int weight; // ������(kg)

    printf("����(cm) �Է�: ");
    scanf("%d", &height);
    printf("������(kg) �Է�: ");
    scanf("%d", &weight);
    // printf("%d, %d", height, weight);

    // 2.��ȯ(���� cm �� m)
    // ��: 183cm �� 1.83m
    //      1.83 = 183.0 / 100
    double height_m = (double)height / 100;
    printf("%.2lf \n", height_m);   

    // 3. ���
    // BMI ���� = ������(kg)/(����(m) x ����(m))
    double bmi_value = weight / (height_m * height_m);

    // 4. ����
    // 18.5�̸�: ��ü��
    // 18.5~23�̸�: ����
    // 23~26�̸�: ��ü��
    // 26~30�̸�: ��
    // 30�̻�: ����

    // bmi_degree �������� ���ڿ� ����
    // C �� ���ڿ�: char [20]
    
        char bmi_degree[20];

    if(bmi_value < 18.5) {
        strcpy(bmi_degree, "��ü��"); 
    } else if(bmi_value >= 18.5 && bmi_value < 23) {
        strcpy(bmi_degree, "����");
    } else if(bmi_value >= 23 && bmi_value < 26) {
        strcpy(bmi_degree, "������");
    } else if(bmi_value >= 26 && bmi_value < 30) {
        strcpy(bmi_degree, "��");
    } else if(bmi_value >= 30) {
        strcpy(bmi_degree, "����");
    }

    printf("���� %dcm, ������ %dkg���� \n", height, weight);
    printf("����� BMI������ %.2lf�� %s�Դϴ�.", bmi_value, bmi_degree);
}
