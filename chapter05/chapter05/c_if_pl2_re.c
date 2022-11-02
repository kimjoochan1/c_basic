#include <stdio.h>

// 학점 계산기
//  - 사용자로부터 점수(0~100점)
//  - 91~100: A
//  - 81~90 : B
//  - 71~80 : C
//  - 61~70 : D
//  - ~60   : F

// 프로그램 작성
// 1. 사용자로부터 점수 입력
// 2. if문을 통해서 점수에 따른 등급 (A,B,C,D< ..) 부여
// 3. 점수 및 등급 출력

// 프로그래밍 조건
//  1. 점수는 0~100점
//  2. 0~100점 아닌경우는 실행 X

// 1번 무조건 실행
//  점수 0~100점 프로그램 실행(2,3)
//  점수 0~100점 아니면 실행 X(2,3)

int main(void) {
    // 1번: 사용자로부터 점수 입력
    int score;
    char grade;

    printf("점수: ");
    scanf("%d", &score);
    
    if(score <= 100 && score >= 0) {
        // 2. 점수로부터 등급(A, B, C, ..) 판단
        if(score >= 91) {
            grade = 'A';
        } else if(score >= 81) {
            grade = 'B';
        } else if(score >= 71) {
            grade = 'C';
        } else if(score >= 61) {
            grade = 'D';
        } else {
            grade = 'E';
        }
        // 3. 점수와 등급을 출력
        printf("학생의 점수는 %d점으로 %c학점입니다.", score, grade);
    } else {
        // 점수: 0점 미만 또는 100점 초과
        printf("ERROR: 0~100점 사이의 값을 입력하세요.");
    }   
}
