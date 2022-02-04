#include <stdio.h>
#include <string.h> //strcpy를 사용하기 위해!

/*
    # 구조체 배열 : 구조체로 이루어진 배열
                    (배열의 요소가 구조체 자료형인 배열)
                    
    * 배열 : 같은 자료형인 여러 개의 데이터를 저장하는 변수

*/

// 구조체 정의
struct person {
    // 이름, 나이
    char name[30];
    int age;
};

int main(void) {
    // 구조체 배열 선언
    struct person boy[3] = {
        {"Kim", 12},
        {"Park", 14},
        {"Moon", 16}
    };

    // 구조체 배열 선언
    struct person girl[3];
    strcpy( girl[0].name, "Lee");
    strcpy( girl[1].name, "Jo");
    strcpy( girl[2].name, "Jung");

    girl[0].age = 10;
    girl[1].age = 20;
    girl[2].age = 30;

    for (int i = 0; i < 3; i++) {
        // 출력
        printf("boy의 이름은 %s, 나이는 %d \n", boy[i].name, boy[i].age);
        printf("girl의 이름은 %s, 나이는 %d \n", girl[i].name, girl[i].age);
        printf("\n");

    }
    
    return 0;
}