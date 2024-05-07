#include<stdio.h>
#include<stdlib.h>


void inputarray(int *arr, int *N){
    for (int i = 0; i < *N; i++){
        printf("Enter the value of the array at index %d: ", i);
        scanf("%d", &arr[i]);
    }
}
void printarray(int *arr, int* N){
    for (int i = 0; i < *N; i++){
        printf("%d ", arr[i]);
    }
}

void diff(int *arr, int* N, int *diff){
    for (int i = 0; i < (*N-1); i++){
        diff[i] = arr[i+1] - arr[i];
    }
}

void sign(int *diff, int *sign, int size){
    
    for (int i = 0; i < size; i++){
        if (diff[i] > 0){
            sign[i] = 1;
        }
        else{
            sign[i] = -1;
        }
    }
}
int main(){
    int N;
    int M;
    int *arr = (int*)malloc(N * sizeof(int));
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    M = N - 1;
    inputarray(arr, &N);
    int *diff_array = (int*)malloc(M * sizeof(int));
    int *sign_array = (int*)malloc(M * sizeof(int));
    diff(arr, &N, diff_array);
    printf("The diff array is: ");
    printarray(diff_array, &M);
    sign(diff_array, sign_array, M);
    printf("\nThe sign array is: ");
    printarray(sign_array, &M);
    return 0;
    
}