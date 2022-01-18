#include <stdio.h>

int main(void) {

    int num, absolute;

    printf("정수 입력 : ");
    // 입력문
    // scanf("형식문자", &변수);
    // d를 num에 넣는듯...^^
    scanf("%d", &num);

    // 조건 연산자 (삼항 연산자)
    // : (조건) ? (참일때) : (거짓일때);
    absolute = num > 0 ? num : num * -1;
    printf("절댓값 : %d\n", absolute);

    return 0;
}