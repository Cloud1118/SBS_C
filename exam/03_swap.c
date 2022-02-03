#include <stdio.h>

void swap(int *a, int *b) { //2개의 값 전달, 포인터 변수로...
    int temp = *a; // 임시로 a의 값 보관
    *a = *b;
    *b = temp;
}

int main(void) {

    int a = 10, b = 20;
    printf("1\n");
    printf("a = %d, b = %d\n", a, b);

    // 함수 호출
    swap(&a, &b); // 값을 넘기는 게 아니라 주소를 넘기는 것

    printf("2\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
