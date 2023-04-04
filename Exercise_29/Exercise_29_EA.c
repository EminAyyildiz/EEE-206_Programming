#include <stdio.h>
#include <string.h>

int main() {
    char member[20], response[10];
    int hours, payed_drivers = 0;
    float cost, earnings = 0.0;
    
    while (1) {
        
        printf("Are you a member? (Yes or No): ");
        scanf("%s", member);
        
        
        if (strcmp(member, "Yes") != 0 && strcmp(member, "Y") && strcmp(member, "No") != 0 && strcmp(member, "N") != 0 ) {
            printf("Please enter a valid response.\n");
            continue;
        }
        
       
        if (strcmp(member, "Yes") == 0 || strcmp(member, "Y") == 0) {
            cost = 1.5;
        } else {
            cost = 3.0;
        }
        
        
        printf("Enter Parked Hours : ");
        scanf("%d", &hours);
        
        
        if (hours <= 0) {
            printf("Please enter a valid number of hours.\n");
            continue;
        }
        
        
        if (hours == 1) {
            cost += 2.0;
        } else if (hours == 2) {
            cost += 2.0 + 1.5;
        } else if (hours == 3) {
            cost += 2.0 + 1.5 + 1.0;
        } else {
            cost += 2.0 + 1.5 + 1.0 + (hours - 3) * 0.5;
        }
        
        
        printf("Total amount is %.1f$\n", cost);
        
        
        earnings += cost;
        payed_drivers++;
        
        
        printf("Do you want to continue? (Yes or No): ");
        scanf("%s", response);
        
        
        if (strcmp(response, "No") == 0 || strcmp(response, "N") == 0) {
            break;
        }
    }
    
    
    printf("%d driver(s) paid. The total earnings are %.1f$\n", payed_drivers, earnings);
    
    return 0;
}
