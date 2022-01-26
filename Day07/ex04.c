#include <stdio.h>

// void : 반환타입이 없음을 의미
void func(int a, int b) {
    
    a = 100;
    b = 200;
    
}

int main(void) {

    int a = 10, b = 20;
    printf("func() 함수 호출 전\n");
    printf("a : %d, b : %d\n", a, b);

    // 값에 의한 전달 (call by value)
    // : 변수가 가진 값을 복사해서 매개변수로 전달
    func(a, b);

    printf("func() 함수 호출 후\n");
    printf("a : %d, b : %d\n", a, b);
    return 0;

}