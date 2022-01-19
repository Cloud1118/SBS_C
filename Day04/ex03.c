#include <stdio.h>

int main(void) {

    char ch;
    printf("정수를 입력하세요 : ");
    scanf("%c", &ch);

    if ( ch == 'A' )
        printf("입력한 문자는 %c 입니다.", ch);
    else
        printf("입력한 문자는 A가 아닙니다.");
    
    return 0;
}