#include <stdio.h>

int main(void) {

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            printf("%d X %d = %d\n", i, j, (i*j));
        }
        printf("]n")
    }
    printf("\n");
    
    return 0;
}