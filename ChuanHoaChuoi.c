#include <stdio.h>
#include <string.h>
#include <ctype.h>

void normalizeString(char *str) {
    int i, j;
    int isFirst = 1; // Biến để kiểm tra ký tự đầu tiên của từ

    // Xóa khoảng trắng dư thừa và chuẩn hóa ký tự
    i = 0;
    j = 0;
    while (str[i] != '\0') {
        // Nếu gặp khoảng trắng ở vị trí đầu hoặc liên tiếp nhiều khoảng trắng
        if (str[i] == ' ' && (i == 0 || str[i - 1] == ' ')) {
            i++;
        }
        // Nếu ký tự không phải khoảng trắng
        else {
            // Nếu ký tự đầu tiên của từ
            if (isFirst) {
                str[j] = toupper(str[i]);
                isFirst = 0;
            }
            // Nếu không phải ký tự đầu tiên của từ
            else {
                str[j] = tolower(str[i]);
            }

            i++;
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    scanf("%[^\n]", str);

    normalizeString(str);

    printf("Chuoi da chuan hoa: %s\n", str);

    return 0;
}
