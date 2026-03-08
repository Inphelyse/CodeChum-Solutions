/* Diagonal Difference
by CodeChum Admin

Write a program that accepts a square 2D array and prints the absolute difference between the sums of its diagonals. Ask for the size and elements of an array. */


#include<stdio.h>
int main(){
    int size;
    
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    int arr[size][size], sum1 = 0, sum2 = 0;
    
    printf("Enter elements of the array:\n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i < size; i++){
        sum1 += arr[i][i];
        
        sum2 += arr[i][size - i - 1];
    }
    int result;
    
    if(sum1 > sum2){
        result = sum1 - sum2;
    } else {
        result = sum2 - sum1;
    }
    
    
    printf("Absolute diagonal difference: %d", result);
    return 0;
}
