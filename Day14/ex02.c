#include <stdio.h>
#include <string.h> //strcpy를 사용하기 위해!

// 구조체 정의
struct person {
    // 이름, 나이 자료형을 정의할 것 (person 안에 이름이랑 나이가 있음)
    char name[30];
    int age;
};

int main(void) {
    // 구조체 선언
    // 구조체 변수 초기화 작업 (ex01과 다른 점^^)
    // 멤버변수의 순서대로 {} 안에 값을 대입
    struct person boy = {"김코딩, 20"};
    struct person girl = {"이코딩, 10"};

    // 출력
    printf("boy의 이름은 %s, 나이는 %d \n", boy.name, boy.age);
    printf("girl의 이름은 %s, 나이는 %d \n", girl.name, girl.age);

    return 0;
}