#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

int main() {
    char employee_name[MAX_EMPLOYEES][50];
    int employee_salary[MAX_EMPLOYEES];
    int num_employees = 0;
    int total_salary = 0;

    while (1) {
        printf("Enter employee name and salary (or 'quit', or 'q' or 'Q' to exit):\n");
        printf("-->");
        char name[50];
        int salary;
        scanf("%s", name);
        

        if (strcmp(name, "quit") == 0 || strcmp(name, "q") == 0 || strcmp(name,"Q") == 0) {
            break;
        }

        scanf("%d", &salary);

        strcpy(employee_name[num_employees], name);
        employee_salary[num_employees] = salary;
        num_employees++;
        total_salary += salary;
    }

    printf("%d employees and the total amount of salaries is %d$\n", num_employees, total_salary);

    return 0;
}
