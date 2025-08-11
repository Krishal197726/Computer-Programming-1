#include <stdio.h>
#include <conio.h>
int main ()
{
float celcius,fahrenheit;
printf ("how many fahrenheit: ");
scanf ("%f", &fahrenheit);
celcius = 5.0/9.0*(fahrenheit-32);
printf("%.2ffahrenheit is equal to %.2fcelcius.",fahrenheit , celcius);
return 0;
}
