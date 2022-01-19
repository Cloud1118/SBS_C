#include <stdio.h>

int main(void) {

   int N;
   printf("성적 : ");
   scanf("%d", &N);

    switch( N ) {
        case 100:
        case 90:
                printf("성적은 A 입니다.");
                break;
        // 100부터 90까지 쭉 내려오다가 break에 걸림
        case 80:
        case 70:
                printf("성적은 B 입니다.");
                break;
        // 얘도 80부터 70까지 내려오고 break에 걸림 (70 미만은 실행 X)
        case 60:
        case 50:
                printf("성적은 C 입니다.");
                break;

        default:
                printf("성적은 F 입니다.\n");
                break;
    }

    return 0;
}

// 성적 : (입력)
// 