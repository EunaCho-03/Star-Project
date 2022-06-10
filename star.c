#include <stdio.h>

int main()
{
    int a;

    printf("Type a number: ");
    scanf_s("%d", &a);

    for (int i = 0; i <= a; i++) {
        for (int j = a - 1; j >= i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (i == a) continue;
            printf("*");
        }
        if (i != a) {
            printf("\n");
        }
    }

    for (int i = 0; i <= a; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * (a - i) - 1); j++) {
            printf("*");
        }
            printf("\n");
    }
    return 0;
}
