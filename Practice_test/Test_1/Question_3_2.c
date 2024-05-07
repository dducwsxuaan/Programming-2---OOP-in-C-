#include<stdio.h>
#include<stdlib.h>

void inputArray2D(int **array, int* row, int* column){
    for (int i = 0; i < *row; i++){
        for (int j = 0; j < *column; j++){
            printf("Enter the value of the array at index (%d, %d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void printArray2D(int **arr, int *rows, int *columns) {
    printf("The array: \n");
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *columns; j++) {
            printf("%d ", *(*(arr + i) + j)); // Access element using correct pointer arithmetic
        }
        printf("\n");  // Newline for each row
    }
}

void compute_squared_diagonal(int** array, int* row, int* column){
    int sum = 0;
    int temp;
    for (int i = 0; i < *row; i++){
        for (int j = 0; j < *column; j++){
            if (i == j){
                temp = array[i][j];
            }
        }
        sum += temp * temp;
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
    for(int i = 0; i < M; i++) {
        arr[i] = (int*)malloc(N * sizeof(int));
    }
    for(int i = 0; i < M; i++) {
        arr[i] = (int*)malloc(N * sizeof(int));
    }
    inputArray2D(arr, &M, &N);
    compute_squared_diagonal(arr, &M, &N);
    free(arr);
}