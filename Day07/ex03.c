#include <stdio.h>

// 함수: 일련의 기능을 하는 코드(실행문)의 모음
// 함수 정의
// 반환타입 함수명 (매개변수 1, 매개변수 2, ...) { 실행문; }
int sum(int a, int b) {
    int sum = a + b;
    return sum;     // 결과 반환
    // return (값)
    // 1. 함수를 종료
    // 2. (값) 을 함수를 호출한 자리로 반환
}

int main(void) {

    int a = 10, b = 20;
    // 함수 호출: 함수명(전달인자1, 전달인자2);
    int result = sum(a, b); // 각각 10, 20으로 선언했던 걸 반환

    printf("a : %d, b : %d\n", a, b);
    printf("result : %d\n", result);

    return 0;

}