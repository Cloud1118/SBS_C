#include <stdio.h>

/*
    문자열 관련 함수
    1. 문자 단위 입출력 함수
    - getchar()     : 하나의 문자를 입력받는 표준입력 함수
    - putchar(문자) : 하나의 문자를 출력하는 표준출력 함수
*/
int main(void) {
    
    int ch1, ch2;

    ch1 = getchar();    // 'A' 입력
    ch2 = getchar();    // [ENTER]
    // 엔터 또한 하나의 문자로 처리되어 입력된다!

    putchar(ch1);
    putchar(ch2);

    return 0;
}