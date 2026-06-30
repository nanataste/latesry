#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int answer = rand() % 100 + 1;
    int guess;

    while (1) {
        printf("1~100 입력: ");
        scanf("%d", &guess);

        if (guess > answer)
            printf("DOWN\n");
        else if (guess < answer)
            printf("UP\n");
        else {
            printf("정답!\n");
            break;
        }
    }

    return 0;
}
