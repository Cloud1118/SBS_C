#include <stdio.h>

// 1. 반환값 X, 매개변수 X
void func1(void) {
    printf("반환값 X, 매개변수 X\n");
}

// 2. 반환값 O, 매개변수 X
int func2(void) {
    // 반환값이 있을 때, 
    // 반드시 return 키워드를 작성
    printf("반환값 O, 매개변수 X\n");
    return 100;
}

// 3. 반환값 X, 매개변수 O
void func3( int a, int b) {
    printf("반환값 X, 매개변수 O\n");
    printf("a + b = %d\n", a+b);
}

// 4. 반환값 O, 매개변수 O
int func4( int a, int b) {
    int sum = a + b;
    printf("반환값 O, 매개변수 O\n");
    return sum;
}

int main(void) {
    // 함수 호출 : 함수를 실행하도록 요청하는 명령

    // 1. 
    func1();

    // 2. 
    int result1 = func2();

    // 3.
    func3(10, 20);

    // 4. 
    int result2 = func4(10, 20);

    printf("result1 : %d\n", result1);
    printf("result2 : %d\n", result2);
    
} // a+b=30이 나와야댐