#include<stdio.h>
    
    void swap(int* a, int* b);

int main(){

int x = 10, y = 20;

swap(&x, &y);

printf("X = %d and Y = %d", x, y);
   
}

void swap(int* q, int* w){
    int temp;
    temp = *q;
    *q = *w;
    *w = temp;
}