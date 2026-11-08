#include <stdio.h>

int main() {
    char ism[50];

    printf("Ismingizni kiriting: ");
    scanf("%s", ism);

    for (int i = 1; i <= 5; i++) {
        printf("%s\n", ism);
    }

    return 0;
}