#include <stdio.h>
#include <conio.h>
int main ()
{
float L,B,area,perimeter;
printf ("enter the length of rectangle");
scanf ("%f",&L);
printf ("enter the breadth of rectangle");
scanf ("%f",&B);
area = L*B;
perimeter = 2*(L+B);
printf ("the area of rectangle is %.2f\n",area);
printf ("the perimeter of rectangle is %.2f\n",perimeter);
return 0;
}
