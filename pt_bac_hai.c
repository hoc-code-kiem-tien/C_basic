#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("Enter 3 coefficients of the equation!\n");
    printf("a = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);
    printf("c = "); scanf("%f", &c);

    //Declare Delta, roots and calculate the value of Delta (b^2-4ac)
    float fDelta = pow(b,2)-(4*a*c);
    float x1,x2;
    printf("Delta = %f\n", fDelta);
    //Split cases of Delta

    if (fDelta > 0)
    {
        x1 = (-b-sqrt(fDelta)) / (2*a);
        x2 = (-b+sqrt(fDelta)) / (2*a);
        printf("The equation has 2 different roots: \n");
        printf("x1 = %.2f     x2 = %.2f", x1,x2);
    }
    else if (fDelta = 0)
    {
        x1 = (-b)/(2*a);
        printf("The equation has double roots %.2f", x1);
    }
    else
        printf("The equation has no root");

    return 0;
}
