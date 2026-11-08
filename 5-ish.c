#include <stdio.h>

int main() {
    int pul, jami = 0;

    for (int i = 1; i <= 7; i++) {
        printf("%d-kun xarajati: ", i);
        scanf("%d", &pul);

        jami = jami + pul;
    }

    printf("Jami xarajat: %d", jami);

    return 0;
}