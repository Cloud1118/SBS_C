#include <stdio.h>

// void : ��ȯŸ���� ������ �ǹ�
void func(int *a, int *b) {     // ������ ����
    
    *a = 100;
    *b = 200;
    
}

int main(void) {

    int a = 10, b = 20;
    printf("func() �Լ� ȣ�� ��\n");
    printf("a : %d, b : %d\n", a, b);

    // ������ ���� ���� (call by refererance)
    // : ������ ���� �����ϴ� �� �ƴ϶�, �ش� ������ ������ �� �ִ� �ּҰ��� ����
    func(&a, &b);       // �ּҸ� ���ڿ��� �Ѱ���� ��

    printf("func() �Լ� ȣ�� ��\n");
    printf("a : %d, b : %d\n", a, b);
    return 0;

}