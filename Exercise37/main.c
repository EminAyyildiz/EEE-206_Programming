#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char* names[] = {"Mary", "John", "George", "Nicole", "Nick", "Jim", "Jack", "Johanna"};
    int salaries[] = {32343, 12134, 25342, 35342, 42343, 32134, 15342, 25342};
    int num_employees = sizeof(salaries) / sizeof(int);

    for (int i = 0; i < num_employees - 1; i++) {
        for (int j = 0; j < num_employees - i - 1; j++) {
            if (salaries[j] < salaries[j+1]) {
                int temp_salary = salaries[j];
                salaries[j] = salaries[j+1];
                salaries[j+1] = temp_salary;
                char* temp_name = names[j];
                names[j] = names[j+1];
                names[j+1] = temp_name;
            }
        }
    }

    printf("*** Employees ordered by salary (lowest to highest):\n");
    for (int i = 0; i < num_employees; i++) {
        printf("--> %s : %d\n", names[i], salaries[i]);
    }

    return 0;
}
