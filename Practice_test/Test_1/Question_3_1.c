#include<stdio.h>
#include<stdlib.h>

void inputArray2D(int **array, int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
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

void printarray1D(int *arr, int *N){
    for (int i = 0; i < *N; i++){
        printf("%d ", arr[i]);
    }
}


void odd_sum(int **array, int *row, int *column, int* sum){
    for (int a = 0; a < *row; a++){
        sum[a] = 0;
    }
    int temp_sum = 0;
    for (int i = 0; i < *row; i++){
        for (int j = 0; j< *column; j++){
            if (array[i][j]%2 != 0){
                temp_sum += array[i][j];
            }
        }
        sum[i] = temp_sum;
        temp_sum = 0;
    }

    printf("The sum of odd elements of each row: ");
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
    int *sum = (int*)malloc(M * sizeof(int));
    inputArray2D(arr, M, N);
    printArray2D(arr, &M, &N);
    odd_sum(arr, &M, &N, sum);
    printarray1D(sum, &M);
    free(arr);
    return 0;

}