/*
Matrix Diagonal Sum
by CodeChum Admin

Given a square matrix of integers, write a function to calculate the sum of its diagonal elements. The diagonal of a matrix refers to the set of elements that lie on the diagonal line that extends from the top-left corner of the matrix to the bottom-right corner. */

#include<stdio.h>
int sumDiag(int size, int arr[][size]){
    int sum = arr[0][0];
    for(int i = 1; i < size; i++){
        sum += arr[i][i];
    }
    return sum;
}

int main(){
    int size;
    
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);
    
    int arr[size][size];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    int res = sumDiag(size, arr);
    printf("The diagonal sum of the matrix is: %d", res);
    return 0;
}
