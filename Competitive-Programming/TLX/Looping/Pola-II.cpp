//
// Created by Dimas on 10/11/21.
//

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < i + 1; ++j) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}