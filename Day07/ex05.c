#include <stdio.h>

// void : 반환타입이 없음을 의미
void func(int *a, int *b) {     // 포인터 변수
    
    *a = 100;
    *b = 200;
    
}

int main(void) {

    int a = 10, b = 20;
    printf("func() 함수 호출 전\n");
    printf("a : %d, b : %d\n", a, b);

    // 참조에 의한 전달 (call by refererance)
    // : 변수의 값을 전달하는 게 아니라, 해당 변수에 접근할 수 있는 주소값을 전달
    func(&a, &b);       // 주소를 인자에게 넘겨줘야 함

    printf("func() 함수 호출 후\n");
    printf("a : %d, b : %d\n", a, b);
    return 0;

}