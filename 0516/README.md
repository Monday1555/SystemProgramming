# 리눅스명령어 'cp'와 'ln'의 차이점

| 특징           | `cp` (복사)                         | `ln` (하드링크)                     | `ln -s` (심볼릭 링크)                 |
| :------------- | :---------------------------------- | :---------------------------------- | :------------------------------------ |
| **생성 대상**  | 원본의 내용을 가진 새로운 파일/디렉터리 | 원본 파일을 가리키는 다른 이름      | 원본 파일/디렉터리의 경로를 가진 파일 |
| **Inode 번호** | 새로운 inode 번호                   | 원본과 동일한 inode 번호            | 새로운 inode 번호                     |
| **원본 삭제 시** | 영향 없음 (독립적인 파일)           | 콘텐츠 유지 (다른 링크 존재 시)     | 링크 무효화 (깨진 링크)               |
| **파일 시스템**| 제한 없음                           | 동일한 파일 시스템 내에서만 가능    | 제한 없음                             |
| **디렉터리**   | `-r` 옵션으로 복사 가능             | 일반적으로 불가 (슈퍼유저 예외)     | `-s` 옵션으로 생성 가능               |
| **목적**       | 독립적인 복사본 생성                | 하나의 파일에 여러 이름 부여        | 원본 객체에 대한 간편한 참조 생성     |

![a.txt생성.png](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![b.txt복사](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![c.txt복사](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![d.txt하드링크](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![e.txt심볼릭링크](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![a.txt수정](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![b.txt,c.txt변환유무확인](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![d.txt,e.txt변환유무확인](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![a.txt삭제](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![b.txt,c.txt변환유무확인](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![d.txt,e.txt변환유무확인](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
![d.txt삭제,e.txt변환유무](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/사진명.png)
