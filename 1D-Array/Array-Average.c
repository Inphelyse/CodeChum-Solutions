/* Array Average
by CodeChum Admin

Write a program that takes an array of integers as input and prints the average of all its elements. */

#include<stdio.h>
int main(){
    int size;
    
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    float avg = 0, sum = 0;
    
    printf("Enter %d elements of array:\n", size);
    
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        
        sum += arr[i];
        avg = sum / size;
    }
    
    printf("The average of the array is: %.2f", avg);
    return 0;
}
