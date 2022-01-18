#include <stdio.h>

int main(void) {
    int num1 = 20, num2 = 10;
    int result;

    // AND 연산 (&&)
    result = 1 && 1;
    printf("result 1 : %d\n", result);

    // 한 줄 복사 단축키: 알트 쉬프트 아래
    // 한 줄 삭제 단축키: 컨트롤 쉬프트 케이
    // 단어 삭제 단축키 : 컨트롤 백스페이스
    result = num1 == 20 && num2 == 10;      // 둘 다 true
    printf("result 2 : %d\n", result);

    // or 연산 (||) - shift + \(원화기호)
    result = 0 || 1;
    printf("result 3 : %d\n", result);

    result = 0 || 0;
    printf("result 4 : %d\n", result);

    // not 연산 (!)
    printf("result 5 : %d\n", !0);
    printf("result 6 : %d\n", !1);

    return 0;
    
}