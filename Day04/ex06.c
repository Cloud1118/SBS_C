#include <stdio.h>

int main(void) {
     // switch 문 (밑에는 길게 주석을 단 것)
     /*
        switch( 표현식, 조건 ) {
            case 값1:       // 조건의 결과가 '값1' 일 때, 실행
                    break;
            case 값2:       // 조건의 결과가 '값2' 일 때, 실행
                    break;
            case 값3:       // 조건의 결과가 '값3' 일 때, 실행
                    break;
            default:        // 어떤 케이스에도 해당되지 않을 때, 실행
                    break;
        }
    */

   int N;
   printf("메뉴 번호 : ");
   scanf("%d", &N);   // 값을 N에 저장하는 것

    switch( N ) {
        case 1:       // 조건의 결과가 '값1' 일 때, 실행
                printf("아메리카노\n");
                break;
        case 2:       // 조건의 결과가 '값2' 일 때, 실행
                printf("카페라떼\n");
                break;
        case 3:       // 조건의 결과가 '값3' 일 때, 실행
                printf("아이스티\n");
                break;
        default:        // 어떤 케이스에도 해당되지 않을 때, 실행
                printf("없음\n");
                break;
    }

    return 0;
}