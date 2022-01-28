#include <stdio.h>
#include <string.h>
/*
    문자열 처리 함수
    : 문자열의 길이, 문자열 복사/결합/비교 등의 기능을 사용하는 함수

    - string.h 이라는 헤더파일에 정의되어있다.

    *종류
    strlen(문자열)              : 문자열의 길이를 반환
    strcpy(str1,str2)           : str2 를 str1 에 복사
    strncpy(str1,str2,count)    : str2 를 str1에 count 개수만큼 복사

    strcat(str1,str2)           : str2 를 str1 뒤에 결합
    strncat(str1,str2,count)    : str2 를 str1 뒤에 count 개수만큼 연결

    strcmp(str1,str2)           : 두 문자열을 비교하여, 같으면 0, 아니면 0이 아닌 값 반환
    strncmp(str1,str2,count)    : 두 문자열을 비교하여, 앞에서부터 count 개수만큼 비교
                                  같으면 0, 아니면 0이 아닌 값 반환
*/
int main(void) {
    
    char str1[50] = "apple is good";
    char str2[50] = "berry is good";
    char str3[50];

    // 각 문자열의 길이
    printf("str1 의 길이 %d \n", strlen(str1));
    printf("str2 의 길이 %d \n", strlen(str2));

    // str1을 str3에 복사하기
    strcpy(str3, str1);

    // str1의 내용 중 5글자만 str2 복사
    strncpy(str2, str1, 5);

    printf("str1 : %s\n", str1);
    printf("str2 : %s\n", str2);
    printf("str3 : %s\n", str3);

    return 0;
    
}