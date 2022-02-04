#include <stdio.h>

/*
    typeof
    : 기존 자료형에 새로운 이름을 부여하는 키워드
    : typedef (기존자료형) (새로운이름);
    ex1)    typedef in INT;
    ex2)    typedef struct {

            } (새로운이름);
    ex3)    typedef strct (구조체이름) (새로운이름);

    구조체 선언 : struct 구조체이름 변수이름;

    typedef 사용 시 구조체 선언
    - typedef struct 구조체이름 새로운이름;
    - 선언: 새로운이름 변수이름;
*/

// 구조체 정의와 동시에 typedef 선언
typedef struct {
    int x;
    int y;
} POINT;

// 구조체 정의
struct person {
    char name[30];
    int age;
};

// 정의된 구조체를 typedef 선언
typedef struct person PERSON;

int main(void) {
    // typedef 사용 시, 구조체 변수를 선언할 때, 
    // 더 간결하게 구조체 변수를 선언할 수 있다
    POINT position = {30, 40};      // x 좌표에 30, y 좌표에 40
    // struct person p;
    PERSON p = {"Kim", 10};

    printf("(x, y) = (%d, %d)\n", position.x, position.y);
    printf("%s : %d\n", p.name, p.age);

    return 0;
}