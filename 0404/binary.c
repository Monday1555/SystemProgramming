#include <stdio.h>

int main() {
    int num;
    char binary[9]; // ������ ǥ���� ���� �迭 (8��Ʈ + null ����)

    printf("0���� 255 ������ ���ڸ� �Է��ϼ���: ");
    scanf_s("%d", &num);

    // �Է� �� ����
    if (num < 0 || num > 255) {
        printf("����: ���ڴ� 0���� 255 ���̿��� �մϴ�.\n");
        return 1; // ���� �ڵ�� �Բ� ����
    }

    // 10������ 2������ ��ȯ
    for (int i = 7; i >= 0; i--) {
        binary[i] = (num % 2) + '0'; // �������� ���ڷ� ��ȯ
        num /= 2; // ���������� ��Ʈ �̵�
    }
    binary[8] = '\0'; // ���ڿ� ���� ���� �߰�

    // ��ü ������ ���
    printf("%s\n", binary);

    // �� 4��Ʈ ���
    for (int i = 0; i < 4; i++) {
        putchar(binary[i]); // �� ��Ʈ ���
    }
    putchar('\n'); // �� �ٲ�

    return 0;
}
