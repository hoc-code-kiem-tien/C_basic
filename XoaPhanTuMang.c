#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void XoaPhanTu(int a[], int size, int index){
    for(int i = index; i < size-1; i++)
        a[i] = a[i+1];
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    XoaPhanTu(arr, n, 3);
    n--;

    for(int i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    return 0;
}
