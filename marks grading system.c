#include <stdio.h>
#include <conio.h>
int main ()
{
float sub1,sub2,sub3,total,average;
printf ("enter the marks of first subject\n");
scanf ("%f",&sub1);
printf ("enter the marks of second subject\n");
scanf ("%f",&sub2);
printf ("enter the marks of third subject\n");
scanf ("%f",&sub3);
total =sub1+sub2+sub3;
printf ("the total of three subject is %.2f\n",total);
average =(sub1+sub2+sub3)/3;
printf ("the average of three subjects is %.2f\n",average);
 if (average>=70)
{
    printf ("grade :distinction");
}
 else if (average >=60)
    {
        printf ("grade :first");
    }
 else if (average>=50)
    {
        printf ("grade :second");
    }
 else if (average >=35)
    {
        printf ("grade :third");
    }
else
{
    printf ("grade :fail");
}
return 0;
}
