#include<stdio.h>
#include<stdlib.h>

void change_value(int min, int max, int *array, int N){
    for (int i = 0; i < N; i++){
        if (array[i] < min){
            array[i] = min;
        }
        else if (array[i] > max){
            array[i] = max;
        }
    }
}

void inputarray(int *arr, int N){
    for (int i = 0; i < N; i++){
        printf("Enter the value of the array at index %d: ", i);
        scanf("%d", &arr[i]);
    }
}
void printarray(int *arr, int N){
    for (int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int N;
    int *arr = (int *)malloc(N * sizeof(int));
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    inputarray(arr, N);
    change_value(3, 6, arr, N);
    printarray(arr, N);
    return 0;
}