#include <stdio.h>

int main() {
    char name[50];
    char student_id[20];

    printf("�̸��� �Է��ϼ���: ");
    scanf_s("%s", name, sizeof(name));  // �迭�� ũ�⸦ ���� ����

    printf("�й��� �Է��ϼ���: ");
    scanf_s("%s", student_id, sizeof(student_id));  // �迭�� ũ�⸦ ���� ����

    printf("�Է��� �̸�: %s\n", name);
    printf("�Է��� �й�: %s\n", student_id);

    return 0;
}
