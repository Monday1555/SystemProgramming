#include <stdio.h>
#include <ctype.h>

int main() {
    char input;

    while (1) {
        printf("���ڸ� �Է��ϼ��� (0�� �Է��ϸ� ����): ");
        scanf_s(" %c", &input);

        if (input == '0') {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }

        if (isupper(input)) {
            printf("%c�� �ҹ��ڴ� %c\n", input, tolower(input));
        }
        else if (islower(input)) {
            printf("%c�� �빮�ڴ� %c\n", input, toupper(input));
        }
        else {
            printf("���ĺ��� �ƴմϴ�.\n");
        }
    }

    return 0;
}
