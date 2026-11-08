#include <stdio.h>

int main() {
    int ball, jami = 0;

    for (int i = 1; i <= 5; i++) {
        printf("%d-topshiriq balli: ", i);
        scanf("%d", &ball);

        jami = jami + ball;
    }

    printf("Jami ball: %d", jami);

    return 0;
}