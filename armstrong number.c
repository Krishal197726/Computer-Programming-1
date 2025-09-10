#include <stdio.h>
#include <conio.h>
int main ()
{
    int digit,num,c,reverse=0;
    printf ("enter a number:");
    scanf ("%d",&num);
   c=num;
    while (num>0)
    {
        digit = num%10;
        num = num/10;
        reverse = (digit*digit*digit)+reverse;
    }
    if (c==reverse)
    {
        printf ("the given no. is armstrong");
    }
    else
    {
        printf("it is not armstrong");
    }
    return 0;
}

