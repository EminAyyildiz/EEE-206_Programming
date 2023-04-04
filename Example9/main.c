//
//  main.c
//  example9
//
//  Created by Emin Ayyıldız on 14.03.2023.
//

#include <stdio.h>


int main() {
    int geometry, algebra, physics;
    
    int average_score;

   
    printf("Enter the grade for Geometry (0-10): ");
    scanf("%d", &geometry);

    printf("Enter the grade for Algebra (0-10): ");
    scanf("%d", &algebra);

    printf("Enter the grade for Physics (0-10): ");
    scanf("%d", &physics);

    
    average_score = (geometry + algebra + physics) / 3;

    //printf("Your average score is: %d\n", average_score);
    if (average_score >=7)
    {
        printf("Good job!, Your average is : %d\n", average_score);
    }
    else if (average_score >= 4.0 && average_score <= 6) {
        printf("You need to work harder!, Your average is : %d\n", average_score);
    }
    else {
        printf("Failed, you really need to work harder!,  Your average is : %d\n", average_score);
    }
    return 0;
}
