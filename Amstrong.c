#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("All Amstrong numbers are: ");
    for(int i = 100; i <= 999; i++) {
        if( ( pow(i%10, 3) + pow(i/100, 3) + pow((i/10)%10, 3) ) == i )
            printf("%d\n", i);
    }
    return 0;
}
