#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h> // wait(), WIFEXITED, WEXITSTATUS 등

int main()
{
    int pid, child, status;

    printf("[%d] 부모 프로세스 시작\n", getpid());

    pid = fork();

    if (pid == 0) {
        // 자식 프로세스
        printf("[%d] 자식 프로세스 시작\n", getpid());
        exit(1); // 종료 코드 1로 종료
    }

    // 부모 프로세스: 자식 종료 대기
    child = wait(&status);

    printf("[%d] 자식 프로세스 %d 종료\n", getpid(), child);

    // 종료 코드 추출
    if (WIFEXITED(status)) {
        printf("\t정상 종료, 종료 코드 %d\n", WEXITSTATUS(status));
    } else {
        printf("\t비정상 종료\n");
    }

    return 0;
}
