#include<stdio.h>
int main()
    {
        int n, x, y;
        printf("Enter n: ");
        scanf("%d", &n);
        //Enter the amount of columns
        //__ + 0...i
        printf(" ");
        for (x = 0; x <= n; ++x){
            printf(" %d", x);
        }
    } 