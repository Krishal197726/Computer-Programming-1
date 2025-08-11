#include <stdio.h>
#include <conio.h>
int main ()
{
     float netsales,grossSales,discount;
     printf ("enter the amount of gross");
     scanf ("%f",&grossSales);
     discount = 0.10*grossSales;
     netsales = grossSales - discount;
     printf ("the amount of net sales is %.3f",netsales);
     return 0;
}
