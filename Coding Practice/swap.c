#include<stdio.h>
int swap(int, int);

int main(){
    int a,b,result;

    a = 10;
    b = 12;

printf("Before Swap\n");  
printf("A = %d\n",a);
printf("B = %d\n",b);


printf("After Swap\n");
printf("A = %d \n B = %d",swap(a,b));


}

int swap(int x, int y)
{
    int result;
    result = x;
    x = y;
    y = result;

    
    return result;
}