/* Array
by CodeChum Admin

Write a program that takes an array of integers as input and prints the count of even numbers in the array. */

#include<stdio.h>
int main(){
    int size;
    
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    int arr[size], even, ctr = 0;
    
    printf("Enter elements of the array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        
        if(arr[i] % 2 == 0){
            ctr++;
        }
    }
    
    printf("Count of even numbers in the array: %d", ctr);
    return 0;
}
