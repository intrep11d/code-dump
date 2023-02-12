#include<stdio.h>

int main()
{
    int numrows;
    printf("Enter n: ");
    scanf("%d", &numrows);

    for (int row = numrows; row >= 1; --row)
    {
        for (int column = 1; column <= row; ++column)
        {
            printf("*");
        }
        printf("\n");
    }
}