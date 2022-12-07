#include <stdio.h>
#include <string.h>


void print_main_menu(void);

int main() {
    // 1. 메인 메뉴 출력
    print_main_menu();

    // 2. 사용자 메인 메뉴 선택
    int menu_num = 0; // 사용자가 선택한 메뉴번호 저장
    // 사용자에게 키보드로 입력받고 출력
    puts("■ 원하시는 메뉴번호를 선택하세요.");
    while(1) { // 1:True, 0: False
        printf(">> 번호: ");
        scanf("%d", &menu_num);
        if(menu_num >= 1 && menu_num <= 4) {
            break;
        } else {
            puts("Warling: 1~4의 번호를 입력해주세요.");
        }
        // 1~4 in 번호 → 넘어감(break)
    }
    // 3.세부메뉴 출력
    int choice_num;
    if(menu_num == 1) {         // 햄버거 세트

    } else if(menu_num == 2) {  // 햄버거
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("== Burger Menu ==");
        for(int i=0; i<3; i++) {
            printf("□□ %d.%s(%d원)\n", i+1, burger_name[i], burger_price[i]);
        }
        // puts("□□ 1.빅맥(5900원)");
        // puts("□□ 2.통새우와퍼(5500원)");
        // puts("□□ 3.싸이버거(4300원)");
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        while(1) {
            printf(">> 번호: ");
            scanf("%d", &choice_num);
            printf("입력 → %d", choice_num);
            if(choice_num >= 1 && choice_num <= 3) {
                break;
            } else {
                puts("Warling: 1~3의 번호를 입력해주세요.");
            }
        }
    } else if(menu_num == 3) {  // 사이드

    } else if(menu_num == 4) {  // 드링크

    }

}


// 메인 메뉴를 출력하는 함수
void print_main_menu(void) {
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ CNU 버거 2022");
    puts("■ - version 1.0");
    puts("■ - develop by cholong02");
    puts("■ - date 2022.12.07");
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ 저희 매장을 찾아주셔서 감사합니다.");
    puts("■ 원하시는 메뉴를 선택해주세요");
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ 1.햄버거 세트"); // 햄버거, 사이드, 음료
    puts("■ 2.햄버거 메뉴"); // 햄버거
    puts("■ 3.사이드 메뉴"); // 사이드
    puts("■ 4.드링크 메뉴"); // 음료
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}