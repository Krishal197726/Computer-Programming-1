#include <stdio.h>
#include <conio.h>
int main ()
{
    int a,b,c;
    printf ("enter three numbers");
    scanf ("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("first number is largest");
        }
        else {
                printf("\nthird number is largest");
                printf("\nsecond number is smallest");}

    }
    else if (b>a)
    {
        if (b>c)
        {
            printf("\nsecond number is largest");
        }
        else { printf("\nthird number is largest");
                printf ("\nfirst number is smallest");}

    }
    if (c<a&&b)
    {
        printf ("\nthird number is smallest");
    }
    return 0;
}
