#include <stdio.h>

int main(void) {

    int N;
    printf("정수를 입력해주세요 : ");
    scanf("%d", &N); // N에 저장해두는 것

    // 홀수일 때
    if ( N % 2 == 1 ) {
        printf("입력한 정수는 홀수입니다.\n");
    // 짝수일 때
    } else {
        printf("입력한 정수는 짝수입니다.\n");
    }
    
    // N % 2 == 1 : 홀수
    // N % 2 == 0 : 짝수

    return 0;
}