#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

int main()
{
    char name_of_employee[MAX_EMPLOYEES][50];
    int salary[MAX_EMPLOYEES];
    int num_tot_employees = 0;

    while(1)
    {
        char input[50];
        int employee_salary;

        printf("Enter employee name and salary (or 'quit' or 'q' or 'Q' to exit) : ");
        scanf("%s", input);

        if(strcmp(input, "quit") == 0 || strcmp(input, "q") == 0 || strcmp(input, "Q") == 0)
        {
            
            break;
        }

        scanf("%d", &employee_salary);

        strcpy(name_of_employee[num_tot_employees], input);
        salary[num_tot_employees] = employee_salary;
        num_tot_employees++;
    }

    int total_salary = 0;
    for(int i = 0; i < num_tot_employees; i++)
    {
        total_salary += salary[i];
    }

    double avg_salary = (double)total_salary / num_tot_employees;
    printf("--> The average salary is %.2f$\n", avg_salary);

    int num_removed = 0;
    char removed_names[MAX_EMPLOYEES][50];

    for(int i = 0; i < num_tot_employees; i++)
    {
        if(salary[i] > avg_salary)
        {
            printf("--> %s's salary is above average. Removing from list.\n", name_of_employee[i]);

            strcpy(removed_names[num_removed], name_of_employee[i]);
            num_removed++;

            for(int j = i; j < num_tot_employees - 1; j++)
            {
                strcpy(name_of_employee[j], name_of_employee[j + 1]);
                salary[j] = salary[j + 1];
            }

            num_tot_employees--;
            i--;
        }
        else
        {
            printf("--> %s's salary is below or equal to average.\n", name_of_employee[i]);
        }
    }

    printf("--> Total Employees : %d\n", num_tot_employees);
    printf("--> Removed Employees on the list : %d\n", num_removed);

    return 0;
}
