#include <stdio.h>

int main(void) {

    int num;
    printf("정수 입력 : ");
    scanf("%d, &num");

    if( num < 3 )
        print("변수 num 은 3보다 작습니다. \n");

     if( num == 3 )
        print("변수 num 은 3 입니다. \n");

     if( num > 3 )
        print("변수 num 은 3보다 큽니다. \n");

    return 0;
    
}