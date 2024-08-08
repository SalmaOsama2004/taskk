#include <stdio.h>

int main() {
    int n, m = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int e = n;

    // First half
    for (int i = 1; i < 2 * n; i++) {
        if (i % 2 == 1) {
            m++;
            for (int w = 0; w < n - m; w++)
                printf(" ");
            for (int k = 1; k <= i; k++)
                printf("*");
            printf("\n");
        }
    }

    // Second half
    for (int i = 2 * n; i >= 1; i--) {
        if (i % 2 == 1) {
            for (int w = 0; w < n - e; w++)
                printf(" ");
            for (int k = i; k >= 1; k--)
                printf("*");
            printf("\n");
            m--;
            e--;
        }
    }

    return 0;
}
