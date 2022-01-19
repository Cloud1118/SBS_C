#include <stdio.h>

int main(void) {

    int score = 0;
    char grade = 'F';
    printf("성적 : ");
    scanf("%d", &score);

    if ( score <= 100 && score >= 90 ) { // 100 이하, 90 이상
         grade = 'A';
    }
    else if ( score >= 80 ) { // else를 썼기 때문에 '80 이상'만 써도 됨
         grade = 'B';
    }
    else if ( score >= 70 ) { // 70 이상
         grade = 'C';
    }
    else if ( score >= 60 ) { // 60 이상
         grade = 'D';
    }
    else { // 나머지가 else가 됨
         grade = 'F';
    }
    
    printf("등급은 %c 입니다.", grade);

    return 0;
}