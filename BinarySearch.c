#include <stdio.h>

void ascending(int a[], int num){
    int temp;
    for(int i = 0; i <= num-2; i++){
        for(int j = i+1; j <= num-1; j++){
            if(a[i] > a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
        }
    }
}

int binarySearch(int array[], int size, int x) {
    ascending(array, size);

    int first = 0, last = size-1, mid;
    while(first <= last) {
        mid = first + (last - first)/2;
        if(array[mid] == x)
            return 1;
        if(array[mid] > x)
            last = mid - 1;
        else
            first = mid + 1;
    }
    return 0;
}

int main() {
    int a[11] = {3, 9, 5, 12, 13, 18, 17, 22, -9, 10, 1};

    printf("%d", binarySearch(a, 11, 19));

    return 0;
}