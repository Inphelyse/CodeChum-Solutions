/* Transpose
by CodeChum Admin

Write a program that accepts a 2D array and prints its transpose. The transpose of a matrix is obtained by interchanging its rows and columns. Ask the user for the size and the elements of the array. */


#include<stdio.h>
int transpose(int rows, int cols, int arr[][cols]){
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int rows, cols;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Transposed matrix:\n");
    transpose(rows, cols, arr);
  return 0;  
}
