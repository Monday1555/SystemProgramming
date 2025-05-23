#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid;
    printf("[%d] 프로세스 시작 \n", getpid());

    pid = fork();  // 자식 프로세스 생성

    printf("[%d] 프로세스 : 리턴값 %d\n", getpid(), pid);
}
