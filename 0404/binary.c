#include <stdio.h>

int main() {
    int num;
    char binary[9]; // 이진수 표현을 위한 배열 (8비트 + null 문자)

    printf("0에서 255 사이의 숫자를 입력하세요: ");
    scanf_s("%d", &num); // scanf를 scanf_s로 수정함.

    // 입력 값 검증
    if (num < 0 || num > 255) {
        printf("오류: 숫자는 0에서 255 사이여야 합니다.\n");
        return 1; // 오류 코드와 함께 종료
    }

    // 10진수를 2진수로 변환
    for (int i = 7; i >= 0; i--) {
        binary[i] = (num % 2) + '0'; // 나머지를 문자로 변환
        num /= 2; // 오른쪽으로 비트 이동
    }
    binary[8] = '\0'; // 문자열 종료 문자 추가

    // 전체 이진수 출력
    printf("%s\n", binary);

    // 앞 4비트 출력
    for (int i = 0; i < 4; i++) {
        putchar(binary[i]); // 각 비트 출력
    }
    putchar('\n'); // 줄 바꿈

    return 0;
}
