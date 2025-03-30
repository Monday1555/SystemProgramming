#include <stdio.h>
#include <ctype.h>

int main() {
    char input;

    while (1) {
        printf("문자를 입력하세요 (0을 입력하면 종료): ");
        scanf_s(" %c", &input);

        if (input == '0') {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        if (isupper(input)) {
            printf("%c의 소문자는 %c\n", input, tolower(input));
        }
        else if (islower(input)) {
            printf("%c의 대문자는 %c\n", input, toupper(input));
        }
        else {
            printf("알파벳이 아닙니다.\n");
        }
    }

    return 0;
}
