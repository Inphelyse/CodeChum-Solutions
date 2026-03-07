/* Find Duplicate Elements in Array
by CodeChum Admin

Write a program that takes an input array of integers and prints a new array containing all the duplicate elements in the original array. */

#include<stdio.h>
int main(){
    int size;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements in the array:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    int dup = 0;
    
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                dup = arr[i];
            }
        }
    }
    
    if(dup != 0){
        printf("Duplicate elements in the array are: %d", dup);
    } else {
        printf("Duplicate elements in the array are: None");
    }
    
    return 0;
}
