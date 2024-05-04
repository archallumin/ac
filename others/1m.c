#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int parse_int() {
    unsigned char bytes[4] = { 0, };

    if (scanf("%c%c%c%c", bytes + 0, bytes + 1, bytes + 2, bytes + 3) == 0) {
        return 0;
    }

    return (bytes[3] << (3 * 8)) +
           (bytes[2] << (2 * 8)) +
           (bytes[1] << (1 * 8)) +
           (bytes[0] << (0 * 8));
}

int main(void) {
    int rows = parse_int();
    int cols = parse_int();
    printf("%d %d\n", rows, cols);

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            int cell = parse_int();
            printf("%d ", cell);
        }
        printf("\n");
    }
    printf("\n");

    while (1) {
        int x = parse_int();
        int y = parse_int();

        if (x == 0) {
            break;
        }

        printf("%d %d\n", x, y);
    }

    return 0;
}