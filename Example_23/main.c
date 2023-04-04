#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter numbers to sum (enter a negative number to stop): ");
    while (1) {
        printf("\n-->");
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        sum += num;
    }
    
    printf("The sum is %d\n", sum);
    
    return 0;
}
