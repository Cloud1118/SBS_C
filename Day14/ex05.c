#include <stdio.h> // 구조체도 포인터 변수가 가능하다~!!

/*
    구조체 포인터 : 포인터 변수가 가리키고 있는 주소값이 구조체인 포인터
    포인터 : 주소값을 저장하는 변수
*/

typedef struct {
    char name[30];
    int age;
} Person;

int main(void) {
    Person boy = {"SBS", 30};
    Person *ptr = &boy;     // 구조체 포인터 (새로운 개념X)

    // 화살표 연산자 (->) : 구조체 포인터의 멤버 변수에 접근하는 연산자
    printf("%s : %d\n", (*ptr).name, (*ptr).age);
    printf("%s : %d\n", ptr->name, ptr->age);

    return 0;
}