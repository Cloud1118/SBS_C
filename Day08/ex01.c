#include <stdio.h>

// 배열 : 같은 자료형을 갖는 여러 개의 값을 저장하는 변수
/* 
    ex) 변수 : int a1 = 100;
               int a2 = 90;
               int a3 = 80;
               int sum = a1 + a2 + a3;
               double avg = (double) sum / 3;

        배열 : int arr[5] = {10, 20, 30, 40, 50};
*/
// 배열 선언 : 자료형 변수명[배열길이];
// 배열 요소 : 배열을 구성하는 각각의 값을 
// 배열 길이 : (배열) 요소의 개수
// 배열 요소 접근 : 순서번호(index) 로 배열 요소의 위치를 지정
//      인덱스(index) 는 0 부터 시작하고, 양의 정수만 갖는다. (순서이기 때문!)
//      ex) 30 --> arr[2]

int main(void) {

    // 10명의 학생의 성적을 입력받아
    int sum = 0;
    int student[10];

    // 반복변수 i : 0~9
    // 입력
    for (int i = 0; i < 10; i++){
        scanf("%d", &student[i]);
    }

    // 출력
    for (int i = 0; i < 10; i++){
        // 누적합계
        // (최종합계) = (이전합계) + (요소);
        sum = sum + student[i];
        // printf("%d", student[i]);
    }
    
    double avg = 0.0;
    avg = (double) sum / 10;

    printf("합계 : %d\n", sum);
    printf("평균 : %f\n", avg);

    return 0;
}