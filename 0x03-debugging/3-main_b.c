#include <stdio.h>

int is_leap_year(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int day_of_year(int day, int month, int year) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_count = day;
    int i = 1;

    if (month < 1 || month > 12 || day < 1 || day > days_in_month[month]) {
        return -1;
    }
    
    if (is_leap_year(year)) {
        days_in_month[2] = 29;
    }
    
    while (i < month) {
        day_count += days_in_month[i];
	i++;
    }
    
    return day_count;
}

int main() {
    int day = 29;
    int month = 2;
    int year = 2000;

    int dayOfYear = day_of_year(day, month, year);
    
    if (dayOfYear == -1) {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    } else {
        int daysLeft = is_leap_year(year) ? (366 - dayOfYear) : (365 - dayOfYear);
        printf("Date: %02d/%02d/%04d\n", month, day, year);
        printf("Day of the year: %d\n", dayOfYear);
        printf("Days left in the year: %d\n", daysLeft);
    }
    
    return 0;
}
