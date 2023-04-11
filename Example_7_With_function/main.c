#include <stdio.h>

int calculateSalary(int yearsEmployed, int numChildren) {

    int totalSalary = 400 + (20 * yearsEmployed) + (30 * numChildren);
    return totalSalary;
}

int main() {
    int yearsEmployed, numChildren;
    printf("Enter years employed: ");
    scanf("%d", &yearsEmployed);
    printf("Enter number of children: ");
    scanf("%d", &numChildren);
    int totalSalary = calculateSalary(yearsEmployed, numChildren);
    printf("The total amount is %d$. %d$ minimum wage + %d$ for %d years experience + %d$ for %d kids\n",
            totalSalary, 400, 20*yearsEmployed, yearsEmployed, 30*numChildren, numChildren);
    return 0;
}
