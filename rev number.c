#include <stdio.h>
#include <conio.h>
int main ()
{
int a,b,c;
printf ("enter a number:");
scanf ("%d",&a);
while (a>0)
    {
        b=a%10;
        a/=10;
        c = c*10+b;

    }
    printf ("%d",c);
    return 0;
}
