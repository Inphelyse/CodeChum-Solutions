/*
Matrix Diagonal Sum
by CodeChum Admin

Given a square matrix of integers, write a function to calculate the sum of its diagonal elements. The diagonal of a matrix refers to the set of elements that lie on the diagonal line that extends from the top-left corner of the matrix to the bottom-right corner. */

#include<stdio.h>
int main(){
    int size;
    
    printf("Enter size of the matrix: ");
    scanf("%d", &size);
    
    int arr[size][size];
    int sum = 0;

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    sum = arr[0][0];
    
    printf("Diagonal sum of the matrix: ");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i == j){
                sum += arr[i][j];
            }
        }
    }
    
    printf("%d", sum);
    return 0;
}
