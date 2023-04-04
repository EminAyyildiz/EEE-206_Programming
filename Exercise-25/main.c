#include <stdio.h>
#include <string.h>

int main() {
    char result[10];
    int heads = 0, tails = 0, count = 0;

    

    while (1) {
        printf("Enter head or tails, or stop to end the program:\n");
        scanf("%s", result);

        if (strstr(result, "head") != NULL) {
            heads++;
        }
        else if (strstr(result, "tails") != NULL) {
            tails++;
        }
        else if (strstr(result, "stop") != NULL) {
            printf("Stopping the program...\n");
            break;
        }

        else {
            printf("Invalid input! Please enter head, tails, or stop.\n");
            continue;
        }
    }

    printf("Head won %d times and tails won %d times\n", heads, tails);
    printf("%.2f%% Head, %.2f%% Tails\n", (float)heads/count*100, (float)tails/count*100);

    return 0;
}
