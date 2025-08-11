#include <stdio.h>
#include <conio.h>
int main ()
{
     float sub1,sub2,sub3,total,average;
     printf ("marks in first subject");
     scanf ("%f",&sub1);
    printf ("marks in second subject");
     scanf ("%f",&sub2);
      printf ("marks in third subject");
     scanf ("%f",&sub3);
     total = sub1+sub2+sub3;
     average = (sub1+sub2+sub3)/3;
     printf ("the total is %.2f and average is %.2f",total,average);
     return 0;
}
