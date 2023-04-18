#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

int main() {
    char names[MAX_EMPLOYEES][50];
    double salaries[MAX_EMPLOYEES];
    int num_employees = 0;
    char input[50];
    printf("Written by Emin Ayyıldız\n");

    while (1) {
        printf("Enter employee name and salary (or 'quit' or 'q' or 'Q' to exit):\n");
        printf("--> ");
        scanf("%s", input);

        if (strcmp(input, "quit") == 0 || strcmp(input, "q") == 0 || strcmp(input, "Q") == 0 ) {
            printf("EXIT.. BYE BYE..\n");
            break;
        }

        strcpy(names[num_employees], input);
        scanf("%lf", &salaries[num_employees]);
        num_employees++;
    }

    double total_salary = 0;
    for (int i = 0; i < num_employees; i++) {
        total_salary += salaries[i];
    }
    double average_salary = total_salary / num_employees;
    printf("--> The average salary is %.2lf$\n", average_salary);

    int num_removed = 0;
    for (int i = 0; i < num_employees; i++) {
        if (salaries[i] >= average_salary) {
            printf("--> %s's salary is above average and has been removed from the list.\n", names[i]);
            num_removed++;
        } else {
            printf("--> %s's salary is below average.\n", names[i]);
        }
    }
    num_employees -= num_removed;

    printf("--> Total Employees: %d\n", num_employees);

    return 0;
}

    
