#include <stdio.h>

// ���� ����
//  - ����ڷκ��� ����(0~100��)
//  - 91~100: A
//  - 81~90 : B
//  - 71~80 : C
//  - 61~70 : D
//  - ~60   : F
int main(void) {
    int score;
    char grade;

    printf("����: ");
    scanf("%d", &score);

    // ����1: score >= 91
    // ����2: score <= 100
    // &&: AND������ �� ���� 2���� ��� ���� ��쿡�� ��!
    if(score <= 100 && score >= 91) {
        grade = 'A';
    } else if(score <= 90 && score >= 81) {
        grade = 'B';
    } else if(score <= 80 && score >= 71) {
        grade = 'C';
    } else if(score <= 70 && score >= 61) {
        grade = 'D';
    } else if(score <= 60 && score >= 0) {
        grade = 'F';
    }
if(score >= 0 && score <= 100) {
    printf("�л��� ������ %d������ %c�����Դϴ�.", score, grade);
    }
}