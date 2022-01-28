#include <stdio.h>
/*
    문자열 단위 입출력 함수
    1. puts(문자열) : 문자열 단위로 출력하는 함수
    2. gets(포인터) : 문자열 단위로 입력받는 함수
*/
int main(void) {
    
    char ch[30]; // 30바이트
    gets(ch);
    puts(ch);
    // 문자열 출력 후, 자동으로 줄바꿈
    printf("다음 줄\n");
    
    return 0;
}