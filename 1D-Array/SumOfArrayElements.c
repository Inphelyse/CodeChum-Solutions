/* Sum of Array Elements
by CodeChum Admin

Write a program that takes an array of integers as input and returns the sum of all its elements.
*/

#include<stdio.h>
int main(){
    int size;
    
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int arr[size];
    int sum = 0;
    if(size == 0){
        printf("Sum of elements: 0");
        return 0;
    }
    
    if(size == 1){
        printf("Enter element: ");
    } else {
        printf("Enter the elements:\n");
    }
    
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of elements: %d", sum);
    return 0;
}
