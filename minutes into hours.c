#include <stdio.h>

int main() {
    int hours;
    int minutes;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    hours = minutes/60;
    printf("%d minnutes is equal to %d hours", minutes,hours);

    return 0;
}

