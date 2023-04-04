

#include <stdio.h>

int main() {
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] >= 0) {
            printf("%d is positive.\n", numbers[i]);
        } else {
            printf("%d is negative.\n", numbers[i]);
        }
    }
    return 0;
}
//  beginer level
/*#include <stdio.h>
 
 int main() {
     int num1, num2, num3, num4, num5;

     printf("Enter five numbers: ");
     scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

     if (num1 >= 0) {
         printf("Positive\n");
     } else {
         printf("Negative\n");
     }

     if (num2 >= 0) {
         printf("Positive\n");
     } else {
         printf("Negative\n");
     }

     if (num3 >= 0) {
         printf("Positive\n");
     } else {
         printf("Negative\n");
     }

     if (num4 >= 0) {
         printf("Positive\n");
     } else {
         printf("Negative\n");
     }

     if (num5 >= 0) {
         printf("Positive\n");
     } else {
         printf("Negative\n");
     }

     return 0;
 }*/
