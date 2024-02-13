#include <stdio.h>
int DecimalToBinary(int N) {
    int binary[16];
    int tempOfN = N;
    if(N < 0)
        N = -N;
    
    // Chuyen doi thanh nhi phan
    for(int i = 0; i <= 15; i++) {
        if(N%2 == 1)
            binary[i] = 1;
        else
            binary[i] = 0;
        N = N/2;
    }
    //Chuyen doi dang 2's complement
    if(tempOfN < 0) 
        for(int i = 0; i <= 15; i++) {
            if(binary[i] == 1) {
                for(int j = i+1; j <= 15; j++)
                    if(binary[j] == 0)
                        binary[j] = 1;
                    else
                        binary[j] = 0;
                    //binary[j] = !binary[j];
                break;
            }
        }
    // In ra man hinh console
    for(int i = 15; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main(){

    int Num;
    printf("Please enter integer number N: ");
    scanf("%d", &Num);

    printf("Conversion result: %dd = ", Num);
    DecimalToBinary(Num);
    printf("b");

    return 0;
}