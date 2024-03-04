#include <stdio.h>
#include <math.h>

int main()
{
    int nYear;
    printf("Enter the year: ");
    scanf("%d", &nYear);

    if ((nYear%400 == 0) || (nYear%4 == 0) && (nYear&100 != 0))
    {
        printf("%d is a leap year", nYear);
    }
    else
    {
        printf("%d is not a leap year", nYear);
    }

    return 0;
}