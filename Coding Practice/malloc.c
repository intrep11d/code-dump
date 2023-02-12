#include<stdio.h>
#include<stdlib.h>

    int main(){
        int i,x;
        int size;

         printf("How many do you want to enter: ");
         scanf("%d", &size);
        
        int* ptr;
        ptr = (int *)malloc(size*sizeof(int));

        for(i=0;i<size;i++){
            printf("Enter an integer: ");
            scanf("%d", &ptr[i]);
        }
        for(x=0;x<size;x++){
        printf("\n%d",ptr[x]);
        }
        
        free(ptr);
        
        for(x=0;x<size;x++){
        printf("\n%d",ptr[x]);
        }

    }