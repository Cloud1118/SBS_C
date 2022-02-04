#include <stdio.h>
#include <string.h> //strcpy를 사용하기 위해!

/*
    # 구조체: 다양한 자료형의 변수들을 묶어서 정의한 새로운 자료형
            : struct
    
    * 구조체의 정의
    struct 구조체이름 {
        자료형1 변수1;
        자료형2 변수2;
        ...
    };

    * 구조체 선언
    struct 구조체이름 변수이름;

*/

// 구조체 정의
struct person {
    // 이름, 나이 자료형을 정의할 것
    char name[30];
    int age;
};

int main(void) {
    // 구조체 선언
    struct person boy, girl; // 두 번 따로 선언해도 됨

    // 멤버 접근 연산자 (.)
    // boy의 name(이름)에 문자열을 복사
    strcpy(boy.name, "김예준");
    strcpy(girl.name, "김예솔");

}