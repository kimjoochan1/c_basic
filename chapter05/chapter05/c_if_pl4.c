#include <stdio.h>
#include <string.h>

/**
 * BMI계산기
 *  1. 사용자 → 신장, 몸무게
 *  2. 값변환 → cm(M)
 *  3. BMI 계산
 *  4. BMT에 따른 등급 부여
 *  5. 출력: BMI결과
*/

int main(void) {
    // 1.입력
    int height; // 신장(cm)
    int weight; // 몸무게(kg)

    printf("신장(cm) 입력: ");
    scanf("%d", &height);
    printf("몸무게(kg) 입력: ");
    scanf("%d", &weight);
    // printf("%d, %d", height, weight);

    // 2.변환(신장 cm → m)
    // 예: 183cm → 1.83m
    //      1.83 = 183.0 / 100
    double height_m = (double)height / 100;
    printf("%.2lf \n", height_m);   

    // 3. 계산
    // BMI 지수 = 몸무게(kg)/(신장(m) x 신장(m))
    double bmi_value = weight / (height_m * height_m);

    // 4. 조건
    // 18.5미만: 저체중
    // 18.5~23미만: 정상
    // 23~26미만: 과체중
    // 26~30미만: 비만
    // 30이상: 고도비만

    // bmi_degree 변수에는 문자열 저장
    // C → 문자열: char [20]
    
        char bmi_degree[20];

    if(bmi_value < 18.5) {
        strcpy(bmi_degree, "저체중"); 
    } else if(bmi_value >= 18.5 && bmi_value < 23) {
        strcpy(bmi_degree, "정상");
    } else if(bmi_value >= 23 && bmi_value < 26) {
        strcpy(bmi_degree, "과제중");
    } else if(bmi_value >= 26 && bmi_value < 30) {
        strcpy(bmi_degree, "비만");
    } else if(bmi_value >= 30) {
        strcpy(bmi_degree, "고도비만");
    }

    printf("신장 %dcm, 몸무게 %dkg으로 \n", height, weight);
    printf("당신의 BMI지수는 %.2lf로 %s입니다.", bmi_value, bmi_degree);
}
