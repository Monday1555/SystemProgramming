#include <stdio.h>

int main() {
    char name[50];
    char student_id[20];

    printf("이름을 입력하세요: ");
    scanf_s("%s", name, sizeof(name)); 

    printf("학번을 입력하세요: ");
    scanf_s("%s", student_id, sizeof(student_id));  

    printf("이름: %s\n", name);
    printf("학번: %s\n", student_id);

    return 0;
}
