#include <cstdio>

typedef long int ld;

int main() {
    ld n;
    scanf("%ld", &n);

    if (n % 2 == 0 && n > 0) {
        printf("%ld\n", n);
    }

    return 0;
}