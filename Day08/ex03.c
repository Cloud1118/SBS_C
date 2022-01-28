#include <stdio.h>
/*
    포인터 변수 : 주소값을 저장하는 변수
    배열의 이름 : 첫번째 요소의 주소값을 의미

    포인터 배열
    : 같은 자료형인 여러 개의 주소값을 저장하는 변수
*/

int main(void) {
    int n1 = 3, n2 = 6, n3 = 9;

    // 포인터 변수 선언 및 초기화
    int *ptr1 = &n1;
    int *ptr2 = &n2;
    int *ptr3 = &n3;

    // 포인터 배열 선언 및 초기화
    int *parr[3] = { ptr1, ptr2, ptr3 };

    // 주소에 들어있는 값을 출력하고 각 주소를 출력
    printf("%d %d %d \n", *parr[0], *parr[1], *parr[2]);
    printf("%p %p %p \n", parr[0], parr[1], parr[2]);    // 주소를 표시하는 형식 문자 : %p

    

}