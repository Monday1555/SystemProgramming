# 리눅스명령어 'cp'와 'ln'의 차이점

| 특징           | `cp` (복사)                         | `ln` (하드링크)                     | `ln -s` (심볼릭 링크)                 |
| :------------- | :---------------------------------- | :---------------------------------- | :------------------------------------ |
| **생성 대상**  | 원본의 내용을 가진 새로운 파일/디렉터리 | 원본 파일을 가리키는 다른 이름      | 원본 파일/디렉터리의 경로를 가진 파일 |
| **Inode 번호** | 새로운 inode 번호                   | 원본과 동일한 inode 번호            | 새로운 inode 번호                     |
| **원본 삭제 시** | 영향 없음 (독립적인 파일)           | 콘텐츠 유지 (다른 링크 존재 시)     | 링크 무효화 (깨진 링크)               |
| **파일 시스템**| 제한 없음                           | 동일한 파일 시스템 내에서만 가능    | 제한 없음                             |
| **디렉터리**   | `-r` 옵션으로 복사 가능             | 일반적으로 불가 (슈퍼유저 예외)     | `-s` 옵션으로 생성 가능               |
| **목적**       | 독립적인 복사본 생성                | 하나의 파일에 여러 이름 부여        | 원본 객체에 대한 간편한 참조 생성     |

## 📁 파일 복사 및 링크 테스트 결과 정리

### 1. `a.txt` 생성 (a.txt내용 : What is the difference between the 'cp' and 'ln' commands?)
![a.txt생성](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/a.txt생성.png)  
🔹 `a.txt` 파일이 생성되었고, 내용이 입력됨.

### 2. `a.txt` → `b.txt` 복사
![b.txt복사](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/b.txt복사.png)  
🔹 `a.txt`를 `b.txt`로 복사하여 독립된 사본을 생성함.

### 3. `a.txt` → `c.txt` 복사
![c.txt복사](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/c.txt복사.png)  
🔹 동일하게 `a.txt`를 `c.txt`로 복사함.

### 4. `a.txt` → `d.txt` 하드 링크 생성
![d.txt하드링크](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/d.txt하드링크.png)  
🔹 `a.txt`에 대해 하드 링크 `d.txt`를 생성함 (같은 inode 공유).

### 5. `a.txt` → `e.txt` 심볼릭 링크 생성
![e.txt심볼릭링크](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/e.txt심볼릭링크.png)  
🔹 `a.txt`를 참조하는 심볼릭 링크 `e.txt` 생성됨 (경로 참조).

### 6. `a.txt` 내용 수정
![a.txt수정](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/a.txt수정.png)  
🔹 `a.txt`의 내용을 수정함.

### 7. `b.txt`, `c.txt` 확인
![b.txt,c.txt변환유무](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/b.txt,c.txt변환유무.png)  
🔹 `b.txt`와 `c.txt`는 수정되지 않고 기존 내용 유지됨 (독립 복사본).

### 8. `d.txt`, `e.txt` 확인
![d.txt,e.txt변환유무](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/d.txt,e.txt변환유무.png)  
🔹 `d.txt`(하드 링크)와 `e.txt`(심볼릭 링크) 모두 수정된 내용을 반영함.

### 9. `a.txt` 삭제
![a.txt삭제](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/a.txt삭제.png)  
🔹 원본 파일 `a.txt`가 삭제됨.

### 10. `b.txt`, `c.txt` 확인
![b.txt,c.txt변환유무2](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/b.txt,c.txt변환유무2.png)  
🔹 `b.txt`와 `c.txt`는 그대로 존재하며 정상 작동함.

### 11. `d.txt`, `e.txt` 확인
![d.txt,e.txt변환유무2](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/d.txt,e.txt변환유무2.png)  
🔹 `d.txt`와 `e.txt` 여전히 정상 작동(같은 inode).

### 12. `d.txt` 삭제 후 `e.txt` 상태
![d.txt삭제,e.txt변환유무](https://raw.githubusercontent.com/Monday1555/SystemProgramming/main/0516/d.txt삭제,e.txt변환유무.png)  
🔹 `d.txt` 삭제 후 `e.txt`는 깨진 링크 상태가 됨.

