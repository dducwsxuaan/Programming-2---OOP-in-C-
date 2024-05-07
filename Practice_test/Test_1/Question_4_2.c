#include<stdio.h>
#include<stdlib.h>

void inputarray(int *arr, int rows, int columns){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("Enter the value of the array at index %d, %d: ", i, j);
            scanf("%d", &arr[i*columns + j]);
        }
    }
}

void printarray2D(int *arr, int rows, int columns){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("%d ", arr[i*columns + j]);
        }
        printf("\n");
    }
}

void doubled_squared_diagonal(int* arr, int row, int column){
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < row; i++){
        for (int j =0; j < column; j++){
            if ((i * column + j) % 4 == 0){
                temp = arr[i * column + j];
            }
        }
        sum += 2 * temp * temp;
        temp = 0;
    }
    printf("The sum of squared diagonal: %d", sum);
}
int main(){
    int M, N;
    printf("Enter the rows: ");
    scanf("%d",&M);
    printf("Enter the columns: ");
    scanf("%d", &N);
    int** arr = (int**)malloc(M * sizeof(int*));
    for (int i = 0; i < M; i++){
        arr[i] = (int*)malloc(N * sizeof(int));
    }
    int* array = (int*)malloc(M * N * sizeof(int));
    inputarray(array, M, N);
    doubled_squared_diagonal(array, M, N);
    return 0;
}