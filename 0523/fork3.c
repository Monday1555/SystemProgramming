#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>  // fork, getpid, etc.

int main()
{
    int pid1, pid2;

    pid1 = fork(); // 첫 번째 자식 프로세스 생성
    if (pid1 == 0) {
        printf("[Child 1] : Hello, world ! pid=%d\n", getpid());
        exit(0);
    }

    pid2 = fork(); // 두 번째 자식 프로세스 생성
    if (pid2 == 0) {
        printf("[Child 2] : Hello, world ! pid=%d\n", getpid());
        exit(0);
    }

    printf("[PARENT] : Hello, world ! pid=%d\n", getpid());
}
