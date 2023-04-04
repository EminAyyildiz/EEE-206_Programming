//
//  main.c
//  example3
//
//  Created by Emin Ayyıldız on 14.03.2023.
//

#include <stdio.h>


int main() {
    float bitcoin_value, bitcoin_increase;
    float total_bitcoin_value, bitcoin_increase_value;

   
    printf("Enter the value of your Bitcoin at the time of purchase: ");
    scanf("%f", &bitcoin_value);

    printf("Enter the percentage of increase (or decrease): ");
    scanf("%f", &bitcoin_increase);

    

    if (bitcoin_increase > 0) {
        total_bitcoin_value = bitcoin_value+ (bitcoin_value *(bitcoin_increase / 100));
        bitcoin_increase_value = (bitcoin_value *(bitcoin_increase/100));

        printf("Your total Bitcoin value is: %.2f\n", total_bitcoin_value);
        
        printf("Your Bitcoin has increased by: %.2f\n", bitcoin_increase_value);
    }
    else if (bitcoin_increase < 0) {
        
        bitcoin_increase_value = -(bitcoin_value *(bitcoin_increase/100));
        total_bitcoin_value = (bitcoin_value) - bitcoin_increase_value;
        printf("Your total Bitcoin value is: %.2f\n", total_bitcoin_value);
        printf("Your Bitcoin has decreased by: %.2f\n", -bitcoin_increase_value);
    }
    else {
        printf("Your Bitcoin value has remained the same.\n");
    }

    return 0;
}
