#include <stdio.h>
#include <string.h>


void print_main_menu(void);

int main() {
    // 1. ���� �޴� ���
    print_main_menu();

    // 2. ����� ���� �޴� ����
    int menu_num = 0; // ����ڰ� ������ �޴���ȣ ����
    // ����ڿ��� Ű����� �Է¹ް� ���
    puts("�� ���Ͻô� �޴���ȣ�� �����ϼ���.");
    while(1) { // 1:True, 0: False
        printf(">> ��ȣ: ");
        scanf("%d", &menu_num);
        if(menu_num >= 1 && menu_num <= 4) {
            break;
        } else {
            puts("Warling: 1~4�� ��ȣ�� �Է����ּ���.");
        }
        // 1~4 in ��ȣ �� �Ѿ(break)
    }
    // 3.���θ޴� ���
    int choice_num;
    if(menu_num == 1) {         // �ܹ��� ��Ʈ

    } else if(menu_num == 2) {  // �ܹ���
        puts("��������������������������������");
        puts("== Burger Menu ==");
        for(int i=0; i<3; i++) {
            printf("��� %d.%s(%d��)\n", i+1, burger_name[i], burger_price[i]);
        }
        // puts("��� 1.���(5900��)");
        // puts("��� 2.��������(5500��)");
        // puts("��� 3.���̹���(4300��)");
        puts("��������������������������������");
        while(1) {
            printf(">> ��ȣ: ");
            scanf("%d", &choice_num);
            printf("�Է� �� %d", choice_num);
            if(choice_num >= 1 && choice_num <= 3) {
                break;
            } else {
                puts("Warling: 1~3�� ��ȣ�� �Է����ּ���.");
            }
        }
    } else if(menu_num == 3) {  // ���̵�

    } else if(menu_num == 4) {  // �帵ũ

    }

}


// ���� �޴��� ����ϴ� �Լ�
void print_main_menu(void) {
    puts("����������������������������������������");
    puts("�� CNU ���� 2022");
    puts("�� - version 1.0");
    puts("�� - develop by cholong02");
    puts("�� - date 2022.12.07");
    puts("����������������������������������������");
    puts("�� ���� ������ ã���ּż� �����մϴ�.");
    puts("�� ���Ͻô� �޴��� �������ּ���");
    puts("����������������������������������������");
    puts("�� 1.�ܹ��� ��Ʈ"); // �ܹ���, ���̵�, ����
    puts("�� 2.�ܹ��� �޴�"); // �ܹ���
    puts("�� 3.���̵� �޴�"); // ���̵�
    puts("�� 4.�帵ũ �޴�"); // ����
    puts("����������������������������������������");
}