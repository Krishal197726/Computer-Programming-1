#include <stdio.h>
#include <conio.h>
int main()
{
    long long bytes;
    printf("Enter the number of bytes: ");
    scanf("%lld", &bytes);
    double kilobytes = (double)bytes / 1024;
    double megabytes = kilobytes / 1024;
    double gigabytes = megabytes / 1024;

    printf("\nConversion Results:\n");
    printf("Bytes: %lld\n", bytes);
    printf("Kilobytes: %.5f\n", kilobytes);
    printf("Megabytes: %.5f\n", megabytes);
    printf("Gigabytes: %.5f\n", gigabytes);

    return 0;
}
