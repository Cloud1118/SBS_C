#include <stdio.h>
#include <string.h> //strcpy�� ����ϱ� ����!

/*
    # ����ü: �پ��� �ڷ����� �������� ��� ������ ���ο� �ڷ���
            : struct
    
    * ����ü�� ����
    struct ����ü�̸� {
        �ڷ���1 ����1;
        �ڷ���2 ����2;
        ...
    };

    * ����ü ����
    struct ����ü�̸� �����̸�;

*/

// ����ü ����
struct person {
    // �̸�, ���� �ڷ����� ������ ��
    char name[30];
    int age;
};

int main(void) {
    // ����ü ����
    struct person boy, girl; // �� �� ���� �����ص� ��

    // ��� ���� ������ (.)
    // boy�� name(�̸�)�� ���ڿ��� ����
    strcpy(boy.name, "�迹��");
    strcpy(girl.name, "�迹��");

}