#include <stdio.h>

// ��������
int N = 10;     // �Լ� �ۿ� ����(data)

// ����� ���� �Լ� : [��ȯŸ��] [�Լ���] (�Ű�����1, �Ű����� 2) {���๮;}
int sum(int a, int b) {
    int result = a + b;
    return result;
}               // stack�� ����

// main �Լ� : ���α׷� ���� ��, ���� ���� ����Ǵ� �Լ�
int main(void) {
    
    int x = 10;
    int y = 20;
    int result = sum(x, y);

    print("�հ� : %d\n", result);
    return 0;
}