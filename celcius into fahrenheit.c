#include <stdio.h>
#include <conio.h>
int main ()
{
float celcius,fahrenheit;
printf ("how many celcius: ");
scanf ("%f", &celcius);
fahrenheit = (9.0/5.0*celcius)+32.0;
printf("%.2f celcius is equal to %.2f fahrenheit.",celcius , fahrenheit);
return 0;
}
