#include <stdio.h>

// 함수 응용 문제
/*
    1. 정수 5개를 입력 받아 배열에 저장
    2. 배열을 함수로 전달
    3. 최댓값을 구하여 반환하는 함수
    (요약 : 정수 5개의 입력값 중 최댓값을 출력하는 프로그램^^)

    매개변수 & 반환값 필요
*/
int N = 5;      // 전역 변수

// 포인터 변수 : 주소값을 저장하는 변수
int max(int* arr){
    int result = 0;

    result = arr[0];
    for (int i = 0; i < N; i++) {
        // arr[i] 예시 : 1 2 3 4 5
        if ( result < arr[i]){
            result = arr[i];
        }
    }
    return result;
}

int main() {
    int arr[5];
    int result = 0;

    printf("정수를 5개 입력 : ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // 최댓값 = 함수호출 -- 배열을 전달
    // 배열의 이름 : 첫번째 주소
    result = max(arr);

    // 출력은 최댓값
    printf("최댓값 : %d\n", result);
    
    
}