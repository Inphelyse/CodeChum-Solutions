/* Array Perfect Square
by CodeChum Admin

Write a program that takes an array of integers from the user and returns a new array containing only the perfect squares (i.e., integers whose square root is an integer). */

#include<stdio.h>
int main(){
    int size;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    int isPerfect[size], ctr = 0;
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        
        for(int j = 0; (j * j) <= arr[i]; j++){
            if((j * j) == arr[i]){
                isPerfect[ctr] = arr[i];
                ctr++;
            }
        }
    }
    
    printf("Perfect square elements in the array: ");
    
    for(int i = 0; i < ctr; i++){
        printf("%d ", isPerfect[i]);
    }
    return 0;
}
