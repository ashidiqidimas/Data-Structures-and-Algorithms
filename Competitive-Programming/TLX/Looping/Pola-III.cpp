//
// Created by Dimas on 10/11/21.
//

#include <cstdio>

int main() {
    int n, counter = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; ++j) {
            printf("%d", counter++);
            if (counter == 10) counter = 0;
        }
        printf("\n");
    }

    return 0;
}