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
        num/=10;
        reverse = reverse*10+digit;
    }
    if (c==reverse)
    {
        printf ("the given no. is palindrome");
    }
    else
    {
        printf("it is not palindrome");
    }
    return 0;
}
