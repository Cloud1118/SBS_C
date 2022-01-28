#include <stdio.h>

/*
    # 포인터와 배열의 관계
    - 배열의 이름 : 첫 요소의 주소값
    - int arr[3];
    - 배열 요소에 접근하는 방법
      1. 인덱스 : arr[n]
      2. 포인터 : *(arr + n)
*/

int main(void) {
    int arr[3] = {1,2,3};

    // 인덱스를 통한 배열 접근
    printf("인덱스를 통한 배열 접근 : \n");
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);

    // 포인터 연산을 통한 배열 접근
    printf("포인터 연산을 통한 배열 접근 : \n");
    printf("%d %d %d\n", *(arr), *(arr+1), *(arr+2));

    return 0;
}