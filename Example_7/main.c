//
//  main.c
//  example7
//
//  Created by Emin Ayyıldız on 14.03.2023.
//

#include <stdio.h>


int main() {
    int years, children;
    float salary;

    printf("Enter the number of years employed: ");
    scanf("%d", &years);

    printf("Enter the number of children: ");
    scanf("%d", &children);

    
    salary = 400 + (20 * years) + (30 * children);

    
    printf("The total amount is: %f\n",salary);
           

    return 0;
}
