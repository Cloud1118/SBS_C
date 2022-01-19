#include <stdio.h>

int main(void) {
    // 정수 자료형
    // bit          : 0, 1으로 자료를 나타내는 기본단위
    // char         : 1byte = 8bit = 2^8 = 256, -128~127
    // short        : 2byte
    // int          : 4byte
    // long         : 4byte
    // long long    : 8byte
    char ch1 = 'A';
    char ch2 = 65;
    printf("문자 %c 아스키 코드 값 : %d \n", ch1, ch1 );
    // 한 줄 복사 : alt + shift + ↓
    printf("아스키 코드 값이 %d 인 문자 %c \n", ch2, ch2 );
    
}