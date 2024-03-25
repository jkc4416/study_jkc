#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char buffer[255]; // 파일에서 읽은 내용을 저장할 버퍼

    // "example.txt" 파일을 읽기/쓰기 모드로 엽니다.
    fp = fopen("example.txt", "a+");
    if (fp == NULL) {
        perror("파일을 열 수 없습니다.");
        return -1;
    }

    // 사용자로부터 문자열을 입력받아 파일에 씁니다.
    
    while (1)
    {
        printf("과일 이름: ");
        scanf("%s", buffer); // 개행 문자를 만날 때까지 입력 받음

        if (strcmp(buffer, "end") == 0)
        {
            break;
        }
        else if (strcmp(buffer, "list") == 0)  // list를 입력하면 파일의 내용 확인
        {
            fseek(fp, 0, SEEK_SET);  // 버퍼의 위치 지시자를 맨 처음으로 이동

            while (1)
            {
                fgets(buffer, sizeof(buffer), fp);  // 과일 이름을 읽음
                
                if (feof(fp))  // 파일의 모든 내용을 읽으면 종료
                {
                    break;
                }
                printf("%s", buffer);  // 읽은 과일 이름을 화면에 출력
            }
        }
        else
        {
            fprintf(fp, "%s\n", buffer);  // 입력한 과일 이름을 파일에 출력
        }

    }

    fclose(fp);

    return 0;
}
