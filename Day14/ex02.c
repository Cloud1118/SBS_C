#include <stdio.h>
#include <string.h> //strcpy�� ����ϱ� ����!

// ����ü ����
struct person {
    // �̸�, ���� �ڷ����� ������ �� (person �ȿ� �̸��̶� ���̰� ����)
    char name[30];
    int age;
};

int main(void) {
    // ����ü ����
    // ����ü ���� �ʱ�ȭ �۾� (ex01�� �ٸ� ��^^)
    // ��������� ������� {} �ȿ� ���� ����
    struct person boy = {"���ڵ�, 20"};
    struct person girl = {"���ڵ�, 10"};

    // ���
    printf("boy�� �̸��� %s, ���̴� %d \n", boy.name, boy.age);
    printf("girl�� �̸��� %s, ���̴� %d \n", girl.name, girl.age);

    return 0;
}