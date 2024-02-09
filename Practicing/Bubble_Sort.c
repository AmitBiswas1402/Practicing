#include <stdio.h>

int main(){
    int arr[100], i, j, n;

    printf("Enter no of elements for array: \n");
    printf("%d", &n);

    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array before sorting: \n");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    for (int i = 0; i < n-1; i++){
        for (int i = 0; i < n-1-i; i++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }        
    }

    printf("\n Array after sorting %d \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }   

    return 0;
}