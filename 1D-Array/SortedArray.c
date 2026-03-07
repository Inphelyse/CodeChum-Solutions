/* Check if Array is Sorted
by CodeChum Admin

Write a program that takes an array of 10 integers as input and prints True if the array is sorted in non-decreasing order, and False otherwise. */

#include<stdio.h>
int main(){
    int size = 10;
    int isSorted = 1;
    int arr[size];
    
    printf("Enter 10 elements in the array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i + 1]){
            isSorted = 0;
            break;
        }
    }
    
    if(isSorted != 1){
        printf("False");
    } else {
        printf("True");
    }
    return 0;
}
