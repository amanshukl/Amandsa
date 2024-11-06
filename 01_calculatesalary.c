#include <stdio.h>
#include <math.h>

int main() {
    int basic;
    char grade;
    float hra, da, pf, allow, totalSalary;

    printf("Enter the basic salary: ");
    scanf("%d", &basic);
    printf("Enter the grade (A, B, C): ");
    scanf(" %c", &grade);
//calculate hra and pf
    hra = 0.2 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;

    if (grade == 'A') {
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }

    totalSalary = basic + hra + da + allow - pf;

    // Round off and print the integral part of total salary
    printf("Total Salary: %d\n", (int)round(totalSalary));

    return 0;
}