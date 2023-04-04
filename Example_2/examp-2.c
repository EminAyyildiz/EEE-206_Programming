//
//  main.c
//  C_ex2
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

    printf("Your average score is: %d\n", average_score);

    return 0;
}
