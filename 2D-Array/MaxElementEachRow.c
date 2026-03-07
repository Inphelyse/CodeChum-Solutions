/* Maximum Element in Each Row
by CodeChum Admin

Write a program that accepts a 2D array and prints an array containing the maximum element in each row of the input array. */


#include<stdio.h>
int main(){
    int rows, cols;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int arr[rows][cols];
    int isMax[rows];
    
    printf("Enter the array elements:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i < rows; i++){
        int currentMax = arr[i][0];
        
        for(int j = 0; j < cols; j++){
            if(arr[i][j] > currentMax){
                currentMax = arr[i][j];
            }
        }
        isMax[i] = currentMax;
    }
    
    printf("The maximum elements per row are: ");
    for(int i = 0; i < rows; i++){
        printf("%d ", isMax[i]);
    }
    return 0;
}
