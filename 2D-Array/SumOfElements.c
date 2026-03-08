/* Sum of All Elements
by CodeChum Admin

Write a program that accepts a 2D array and print the sum of all its elements. Ask for the size and elements of an array. */


#include<stdio.h>
int main(){
    int rows, cols;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int arr[rows][cols], sum = 0;
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements: %d", sum);
    return 0;
}
