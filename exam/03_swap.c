#include <stdio.h>

void swap(int *a, int *b) { //2���� �� ����, ������ ������...
    int temp = *a; // �ӽ÷� a�� �� ����
    *a = *b;
    *b = temp;
}

int main(void) {

    int a = 10, b = 20;
    printf("1\n");
    printf("a = %d, b = %d\n", a, b);

    // �Լ� ȣ��
    swap(&a, &b); // ���� �ѱ�� �� �ƴ϶� �ּҸ� �ѱ�� ��

    printf("2\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
