#include <stdio.h>

int main(void) {
    // 포인터 연산하기
    int num = 10;
    // 포인터 변수 pnum은 num 주소를 저장
    int *pnum = &num;

    printf("변경 전 *pnum : %d\n", *pnum);

    *pnum = 20;     // 기존의 10이라는 값이 변경된 것
    printf("변경 후 *pnum : %d\n", *pnum);
    printf("num : %d\n", num);

    // 포인터를 사용하는 이유
    // 1. 메모리를 제어해야하는 경우
    // 2. 동적 할당 및 메모리 접근을 시도하는 경우
    // 3. 자료구조 & 알고리즘 등의 코드를 작성하는 경우

    return 0;

}