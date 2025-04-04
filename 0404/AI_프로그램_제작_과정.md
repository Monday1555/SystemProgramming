# AI를 이용한 프로그램 제작 과정 보고서

## 1. 개요
본 보고서는 AI를 활용하여 프로그램을 제작하는 과정에 대해 설명합니다. WRTN의 자동완성 코드 과제를 통해 원하는 프로그램과 해당 언어를 입력하여 결과물을 얻는 과정을 다룹니다.

## 2. 과정 설명
1. **프롬프트 입력**: 
   - WRTN의 자동완성 기능을 사용하여 원하는 프로그램과 프로그래밍 언어를 입력합니다.
   - AI는 입력된 내용을 바탕으로 코드와 프로그램 설명을 생성합니다.

2. **결과물 정리**:
   - AI가 생성한 코드와 프로그램 설명을 프롬프트에 입력하여 정리합니다.
   - 이 과정을 통해 더욱 명확하고 이해하기 쉬운 결과물을 얻습니다.

## 3. 결과물
AI를 통해 생성된 코드와 설명은 다음과 같습니다.

### 코드 예시
```c
#include <stdio.h>

int main() {
    int num;
    char binary[9];

    printf("0에서 255 사이의 숫자를 입력하세요: ");
    scanf("%d", &num);

    if (num < 0 || num > 255) {
        printf("오류: 0에서 255 사이의 숫자를 입력해야 합니다.\n");
        return 1;
    }

    for (int i = 7; i >= 0; i--) {
        binary[i] = (num % 2) + '0';
        num /= 2;
    }
    binary[8] = '\0'; // 문자열 종료

    printf("이진수: %s\n", binary);

    printf("앞 4비트: ");
    for (int i = 0; i < 4; i++) {
        putchar(binary[i]);
    }
    putchar('\n');

    return 0;
}

## 이미지

1. ![prompt1.png](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0404/prompt1.png)
2. ![prompt2.png](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0404/prompt2.png)
3. ![prompt3.png](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0404/prompt3.png)


