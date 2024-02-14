#include <stdio.h>

void printFibonacci(int n) {
    int first = 0, second = 1;

    if (n >= 1) {
        printf("%d ", first);
    }
    if (n >= 2) {
        printf("%d ", second);
    }

    for (int i = 3; i <= n; i++) {
        int next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
