#include <stdio.h>
#include <conio.h>
int main ()
{
float L,area,perimeter;
printf ("enter the length of square");
scanf ("%f",&L);
area = L*L;
perimeter = 4*L;
printf ("the area of square is %.2f\n",area);
printf ("the perimeter of square is %.2f\n",perimeter);
return 0;
}
