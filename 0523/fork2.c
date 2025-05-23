#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // fork, getpid

int main()
{
    int pid;
    pid = fork();

    if (pid == 0) { // 자식 프로세스
        printf("[Child] : Hello, world pid=%d\n", getpid());
    }
    else if (pid > 0) { // 부모 프로세스
        printf("[Parent] : Hello, world pid=%d\n", getpid());
    }
    else {
        perror("fork failed"); // 오류 처리
        exit(1);
    }

    return 0;
}
