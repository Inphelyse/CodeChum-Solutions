/* Reverse Array
by CodeChum Admin

Write a program that takes an array of integers as input and prints the array in reverse order. */

#include<stdio.h>
int main(){
    int size;
    
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("The array in reverse order is: ");
    
    for(int i = size - 1; i >= 0; i--){
            printf("%d ", arr[i]);
        }
    
}
