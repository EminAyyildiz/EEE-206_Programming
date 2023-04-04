

#include <stdio.h>

int main() {
    int time;
    char is_member;
    float cost_per_hour, tax_rate,total_am;

    printf("How many hours did the user spend? :  ");
    scanf("%d", &time);

    printf("Is the user a member? : (Y/N) ");
    scanf(" %c", &is_member);

    if (is_member == 'Y' || is_member == 'y') {
        cost_per_hour = 2.0;
        tax_rate = 0.1;
        total_am = (time*cost_per_hour)*tax_rate+time*cost_per_hour;
        
        printf("The user is a member. The cost is :%.1f$\n",total_am);
    } else {
        cost_per_hour = 5.0;
        tax_rate = 0.2;
        total_am = (time*cost_per_hour)*tax_rate+time*cost_per_hour;
        
        printf("The user is not a member. The cost is :%.1f$\n",total_am);
    }

    return 0;
}
