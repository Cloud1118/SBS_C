#include <stdio.h>


int main(void) {
  
    // 배열
    // : 같은 자료형을 갖는 여러 개의 데이터를 저장할 수 있는 자료구조
    // 선언
    // - 자료형 변수명[개수];
    // - 자료형 변수명[] = {1,2,3};
    // 배열 변수 선언 및 초기화
    int num[3] = {1, 2, 3};


    char ch[] = {'a', 'b', 'c', 'd'};


    // 배열에 접근하기
    // index (순서번호)
    // : 0 부터 시작하는 배열 요소의 위치를 나타내는 번호
    printf("num[%d] = %d \n", 0, num[0]);
    printf("num[%d] = %d \n", 1, num[1]);
    printf("num[%d] = %d \n", 2, num[2]);
    printf("\n");


    printf("ch[%d] = %c \n", 0, ch[0]);
    printf("ch[%d] = %c \n", 1, ch[1]);
    printf("ch[%d] = %c \n", 2, ch[2]);
    printf("ch[%d] = %c \n", 3, ch[3]);
    printf("\n");

}