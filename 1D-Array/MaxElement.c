/* Maximum Element in Array
by CodeChum Admin

Write a function that takes an array of integers as input and prints the maximum element in the array. */


#include<stdio.h>
int main(){
    int size, max;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter elements of array:\n");
    
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    printf("Maximum element in array is: %d", max);
    return 0;
}
