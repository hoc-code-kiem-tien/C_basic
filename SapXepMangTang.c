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

int main(){
    //enter the elements of the array
    int iArray[100], iArrayN;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &iArrayN);
    for(int i = 0; i <= (iArrayN-1); i++){
        printf("iArray[%d] = ", i);
        scanf("%d", &iArray[i]);
    }
    printf("Ascending array: \n");

    ascending(iArray, iArrayN);

    //print the array
    for(int i = 0; i <= (iArrayN-1); i++)
        printf("%d   ", iArray[i]);

    return 0;
}
