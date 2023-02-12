#include<stdio.h>

    int main(){

    int x, y, z;
    int* ptrX;
    
    printf("Enter the first weight: ");
    scanf("%d", &x);

    printf("Enter the second weight: ");
    scanf("%d", &y);

    printf("Enter the third weight: ");
    scanf("%d", &z);

    ptrX = x;
    if(ptrX < y && ptrX < z){
        printf("Smallest weight: %d", x);
    }
    ptrX = y;
    if(ptrX < x && ptrX < z){
        printf("Smallest weight: %d", y);
    }
    ptrX = z;
    if(ptrX < x && ptrX < y){
        printf("Smallest weight: %d", z);
    }
    }