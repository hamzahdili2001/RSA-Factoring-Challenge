#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void factorize(int n) {
    // Helper function to factorize a number n into two smaller numbers
    if (n % 2 == 0) {
        printf("%d=%d*%d\n", n, 2, n / 2);
        return;
    }

    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            printf("%d=%d*%d\n", n, i, n / i);
            return;
        }
    }

    printf("%d=%d*%d\n", n, n, 1);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        return 1;
    }

    char line[20];
    while (fgets(line, sizeof(line), file)) {
        int n = atoi(line);
        factorize(n);
    }

    fclose(file);
    return 0;
}
