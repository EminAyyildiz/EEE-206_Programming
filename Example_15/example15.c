
#include <stdio.h>

int main() {
    int duration;
    float total_cost = 25.0;
    float total;
    
    
    printf("Enter the duration of calls (in seconds): ");
    scanf("%d", &duration);
    
    if (duration >= 1 && duration <= 500) {
        total = total_cost+duration*0.01;
        printf("Total amount: %f$\n", total);
    }
    
    else if (duration >= 501 && duration <= 800)
    {
        total = total_cost+duration*0.008;
        printf("Total amount: %f$\n", total);
    }
    else if (duration >= 801)
    {
        
        total = total_cost+duration*0.005;
        printf("Total amount: %f$\n", total);
    }
    else
    {
        printf("Invalid duration valid...\n" );
    }
    
    
    return 0;
}



