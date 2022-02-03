#include <stdio.h>
#include <stdlib.h>     // ���� �Ҵ� �Լ� ����� ���� ���̺귯��

/*
    malloc(size), memory allocation
    : �޸𸮸� size(byte)��ŭ �������� �Ҵ��ϴ� �Լ�
     - �Ҵ�� �޸� ������ �ּҰ��� ��ȯ (void*)
     - ��ȯ�� �ּҰ��� �����ͺ����� �����ϱ� ���ؼ�
       ���� ����ȯ�� ����ؾ��Ѵ�.
*/

int main(void) {
    
    // int���� �޸𸮰��� 5���� �Ҵ�
    int *ptr = (int *) malloc( sizeof(int)*5 ); // ��Ʈ�� 4����Ʈ�� 5���� ���ؼ� 20��

    // double���� �޸𸮰��� 3���� �Ҵ�
    double *dptr = (double *) malloc( sizeof(double) *3);

    for (int i = 0; i < 5; i++) {
        ptr[i] = (i+1)*10;          // 10 20 30 40 50 
    }
    for (double i = 0; i < 3; i++) {
        dptr[i] = (i+1)*1.5;        // 1.5 3.0 4.5 6.0
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    for (double i = 0; i < 5; i++) {
        printf("%f ", dptr[i]);
    }
    printf("\n");

    // �������� �Ҵ�� �޸𸮸� ����
    // free(������) : ���� �Ҵ��� �޸� ������ �����ϴ� �Լ�
    if( ptr != NULL)
        free(ptr);
    if( dptr != NULL )
        free(dptr);

}