#include <stdio.h>

int main(void) {
    // 1~10까지의 합을 구하시오.
    int i = 1;
    int sum = 0;

while( i <= 10) {
    sum += i;        // sum = sum +i;
    i++;            // i = i + 1;
    // sum = 0 + 1;
    // sum = 1 + 2;
    // 이걸 1+...+10;이 될 때까지 반복
}

printf("합계 : %d\n", sum);

}