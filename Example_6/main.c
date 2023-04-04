//
//  main.c
//  example6
//
//  Created by Emin Ayyıldız on 14.03.2023.
//

#include <stdio.h>

int main() {
    float price, tax, total_price;

   
    printf("Enter the price of the laptop: ");
    scanf("%f", &price);

    printf("Enter the tax percentage: ");
    scanf("%f", &tax);

    
    total_price = price + (price * tax / 100);

    printf("The total price of the laptop is %.2f\n", total_price);

    return 0;
}
