#include <stdio.h>
#include <stdbool.h>

//Gọi hàm isPrime(n), bỏ số n cần kiểm tra vô. Hàm sẽ trả về 1 (là nguyên tố) hoặc 0 (không phải)

bool isPrime(int C) {
    if (C < 2) {
        return 0;
    }
    for (int i = 2; i * i <= C; i++) {
        if (C % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int c;
    scanf("%d", &c);

    if (isPrime(c)) {
        printf("%d la so nguyen to", c);
    } else {
        printf("%d khong la so nguyen to", c);
    }

    return 0;
}
