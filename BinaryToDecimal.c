#include <stdio.h>
#include <math.h>

double binaryToDecimal(char bi[]) {
    double dec = 0;
    for(int i = 15; i >= 0; i--) {
        if(bi[i] == '1') {
            dec += pow(2, 15-i);
        }
    }
    return dec;
}

int main() {

    char binary[17];

    printf("Please enter a 16-bits binary number: ");
    scanf("%s", binary);

    printf("Conversion result: %sb = %.0lfd", binary, binaryToDecimal(binary));

    return 0;
}