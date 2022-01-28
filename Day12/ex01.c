#include <stdio.h>

// 전역변수
int N = 10;     // 함수 밖에 선언(data)

// 사용자 정의 함수 : [반환타입] [함수명] (매개변수1, 매개변수 2) {실행문;}
int sum(int a, int b) {
    int result = a + b;
    return result;
}               // stack에 저장

// main 함수 : 프로그램 실행 시, 가장 먼저 실행되는 함수
int main(void) {
    
    int x = 10;
    int y = 20;
    int result = sum(x, y);

    print("합계 : %d\n", result);
    return 0;
}