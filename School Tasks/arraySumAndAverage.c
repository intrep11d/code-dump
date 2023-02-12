#include<stdio.h>

int main(){

    int size, i, sum, average;
    
    printf("How many numbers do you want to enter? ");
    scanf("%d", &size);
        int numSet[size];
    for(i=0; i<size; i++){
        printf("Enter number: ");
        scanf("%d", &numSet[i]);
    }
        sum = 0;
    for(i=0; i<size; i++){
        sum = sum + numSet[i];
    }
        average = sum/size;
    printf("Sum: %d\n", sum);
    printf("Average: %d\n", average);
}