#include<stdio.h>

void main(){

    int numSet[5], i, max, min;
    
    for(i=0; i<5; i++){ //Asking for user input
        printf("Enter a number: ");
        scanf("%d", &numSet[i]);
    }
    max = numSet[0];
    min = numSet[0];

for(i=1; i<5; i++)
{
    if(numSet[i] > max)
    { 
        max = numSet[i];
    }

    if(numSet[i] < min)
    {
        min = numSet[i];
    }
}
    printf("Minimum: %d\n", min);
    printf("Maximum: %d", max);
    }