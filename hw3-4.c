#include <stdio.h>
#include <string.h>

int main() {
    char answer[5];
    char guess[5];
    int a, b;

    while (1) {
        printf("請輸入答案：\n");
        scanf("%s", answer);
        if (strcmp(answer, "0") == 0) {
            break;
        }

        while (1) {
            scanf("%s", guess);
            if (strcmp(guess, "0") == 0) {
                break;
            }

            a = 0;
            b = 0;
            int visited[4] = {0};


            for (int i = 0; i < 4; i++) {
                if (guess[i] == answer[i]) {
                    a++;
                    visited[i] = 1;
                }
            }


            for (int i = 0; i < 4;i++) {
                if (visited[i] == 1) {
                    continue;
                }
                for (int j = 0; j < 4; j++) {
                    if (i != j && guess[i] == answer[j] && visited[j] == 0) {
                        b++;
                        visited[j] = 1;
                        break;
                    }
                }
            }
            printf("%dA%dB\n", a, b);
        }
    }

    return 0;
}
