
#include <stdio.h>

int main() {
    float x, y, total_cost;

    printf("Wikipedia Mb consumption: ");
    scanf("%f", &x);

    printf("Meme Mb consumption: ");
    scanf("%f", &y);

    float wikipedia_cost = x * 0.10;
    float meme_cost = y * 0.05;
    total_cost = wikipedia_cost + meme_cost;

    printf("Total consumption: %.2f\n", total_cost);

    if (total_cost > 100.0) {
        printf("Too much consumption\n");
    }

    if (y > x) {
        printf("WOW MANY MEMES\nSUCH LOL\n");
    }

    return 0;
}
