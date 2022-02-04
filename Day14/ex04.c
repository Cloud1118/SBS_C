#include <stdio.h>

/*
    typeof
    : ���� �ڷ����� ���ο� �̸��� �ο��ϴ� Ű����
    : typedef (�����ڷ���) (���ο��̸�);
    ex1)    typedef in INT;
    ex2)    typedef struct {

            } (���ο��̸�);
    ex3)    typedef strct (����ü�̸�) (���ο��̸�);

    ����ü ���� : struct ����ü�̸� �����̸�;

    typedef ��� �� ����ü ����
    - typedef struct ����ü�̸� ���ο��̸�;
    - ����: ���ο��̸� �����̸�;
*/

// ����ü ���ǿ� ���ÿ� typedef ����
typedef struct {
    int x;
    int y;
} POINT;

// ����ü ����
struct person {
    char name[30];
    int age;
};

// ���ǵ� ����ü�� typedef ����
typedef struct person PERSON;

int main(void) {
    // typedef ��� ��, ����ü ������ ������ ��, 
    // �� �����ϰ� ����ü ������ ������ �� �ִ�
    POINT position = {30, 40};      // x ��ǥ�� 30, y ��ǥ�� 40
    // struct person p;
    PERSON p = {"Kim", 10};

    printf("(x, y) = (%d, %d)\n", position.x, position.y);
    printf("%s : %d\n", p.name, p.age);

    return 0;
}