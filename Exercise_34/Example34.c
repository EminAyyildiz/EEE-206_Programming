#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100


int main() {
    char name_of_employee[MAX_EMPLOYEES][50];
    int employee_salary[MAX_EMPLOYEES];
    int number_of_emp = 0;
    int tot_salary = 0;

    while (1) {
        printf("Enter employee name and salary (or 'quit' or 'q' or 'Q' to exit):\n");
        printf("---> ");
        char name_salary[50];
        int salary;
        scanf("%s", name_salary);

        if (strcmp(name_salary, "quit") == 0 || strcmp(name_salary, "q") == 0 || strcmp(name_salary,"Q") == 0) {
            break;
        }

        scanf("%d", &salary);

        strcpy(name_of_employee[number_of_emp], name_salary);
        employee_salary[number_of_emp] = salary;
        number_of_emp++;
        tot_salary += salary;
    }



    printf("--> %d employees and the total amount of salaries is %d$\n", number_of_emp, tot_salary);
    float avg_salary = (float) tot_salary / number_of_emp;
    printf("The average salary is %.2f$\n", avg_salary);

    
    for (int i = 0; i < number_of_emp; i++) {
        if (employee_salary[i] < avg_salary) {
            printf("--> %s's salary is below average\n", name_of_employee[i]);
        } else {
            printf("--> %s's salary is above average\n", name_of_employee[i]);
        }
    }

    return 0;
}

