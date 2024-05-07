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

void printarray1D(int* x, int n){
    int i = 0;
    while (i < n){
        printf("%d ", x[i]);
        i++;
    }
    return;
}

void sum_even(int *arr, int rows, int columns, int* sum){
    for (int i = 0; i < rows; i++){
        sum[i] = 0;
    }
    int temp = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (i % 2 == 0){
                if ((i*columns + j) % 2 == 0){
                    temp += arr[i*columns + j];
                }
            }
            else{
                if ((i*columns + j) % 2 != 0){
                    temp += arr[i*columns + j];
                }
            }
        }
        sum[i] = temp;
        temp = 0;
    }
    printf("The sum of even numbers in each row: ");
    printarray1D(sum, rows);
    printf("\n");
    free(sum);

}

int main(){
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    int columns;
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    int *array;
    int** arr = (int**)malloc(rows * sizeof(int*));
    for(int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(columns * sizeof(int));
    }
    int *sum_even_array = (int *)malloc(rows * sizeof(int));
    inputarray(array, rows, columns);
    sum_even(array, rows, columns, sum_even_array);
    printarray2D(array, rows, columns);

    return 0;
}