#include <stdio.h>
#include <conio.h>
int main ()
{
int a,b;
printf ("enter two numbers");
scanf ("%d%d",&a,&b);
if (a>b)
{
    printf("first number is largest");
    printf ("second number is smallest");
}
else
{
    printf("second number is largest");
    printf("first number is smallest");
}

}
