#include <stdio.h>

void printpattern_stars(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int lines_num;
    printf("Enter the number of stars-lines: ");
    scanf("%d", &lines_num);

    printpattern_stars(lines_num);

    return 0;
}
