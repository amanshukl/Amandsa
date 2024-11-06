#include <stdio.h>

int getWeekday(int day, int month, int year) {
    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }

    int K = year % 100;       
    int J = year / 100;       
    int weekday;

    // Zeller's Congruence Formula
    weekday = (day + (13 * (month + 1)) / 5 + K + (K / 4) + (J / 4) - 2 * J) % 7;

    // Adjusting to match 0 = Saturday, 1 = Sunday, etc.
    if (weekday < 0) {
        weekday += 7;
    }

    return weekday;
}

int main() {
    int day, month, year, weekday;
    char *weekdays[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    weekday = getWeekday(day, month, year);

    printf("The day is: %s\n", weekdays[weekday]);

    return 0;
}
