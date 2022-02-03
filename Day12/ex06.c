#include <stdio.h>
#include <stdlib.h>

char * getString(void) {
    char * str = (char*) malloc( sizeof(char)*100 );
    printf("내가 좋아하는 색깔 : ");
    gets(str);      // 문자열을 입력받는 함수
    return str;
}

int main(void) {

    char* result = getString();
    printf("Q. 내가 좋아하는 색깔은? \nA. %s", result);
    if( result != NULL )
        free(result);

    return 0;
}