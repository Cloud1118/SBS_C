#include <stdio.h> // ����ü�� ������ ������ �����ϴ�~!!

/*
    ����ü ������ : ������ ������ ����Ű�� �ִ� �ּҰ��� ����ü�� ������
    ������ : �ּҰ��� �����ϴ� ����
*/

typedef struct {
    char name[30];
    int age;
} Person;

int main(void) {
    Person boy = {"SBS", 30};
    Person *ptr = &boy;     // ����ü ������ (���ο� ����X)

    // ȭ��ǥ ������ (->) : ����ü �������� ��� ������ �����ϴ� ������
    printf("%s : %d\n", (*ptr).name, (*ptr).age);
    printf("%s : %d\n", ptr->name, ptr->age);

    return 0;
}