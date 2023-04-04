//
//  main.c
//  ex4
//
//  Created by Emin Ayyıldız on 14.03.2023.
//

#include <stdio.h>

int main() {
    float width, height, total_area;

    
    printf("Enter the width of the property: ");
    scanf("%f", &width);

    printf("Enter the height of the property: ");
    scanf("%f", &height);

    
    total_area = width * height;

   
    printf("The total area of the property is: %.2f\n", total_area);

    return 0;
}
