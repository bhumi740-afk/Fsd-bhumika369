#include<stdio.h>

void displayarray(int arr[2][3], int row, int column);

int main() {
    int row = 2;
    int column = 3;
    int arr[2][3] = {{1,2,3},{4,5,6}};
    displayarray(arr, row, column);
    return 0;
}

void displayarray(int arr[2][3], int row, int column) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}