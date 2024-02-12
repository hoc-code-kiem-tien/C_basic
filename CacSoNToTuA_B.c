#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long prime_check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return n>1;
}

int main(){
    long long int a, b;
    printf("a = "); scanf("%lld", &a);
    printf("b = "); scanf("%lld", &b);

    int count = 0;
    for(long long int i = a; i <= b; i++){
        long long int j = i;
        while(j >= 1){
        if(prime_check(j%10) == 0)
            break;
        j /= 10;
        }
        if(j == 0){
            printf("%d\n", i);
            count++;
        }
    }

    printf("There are %d", count);
    return 0;
}
