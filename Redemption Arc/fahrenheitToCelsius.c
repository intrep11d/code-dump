#include<stdio.h>

int main(){

    float tempF; 
    float tempC;

    printf("Insert temperature in Fahrenheit: ");
    scanf("%f", &tempF);

    tempC = (tempF - 32) * 5/9;

    printf("Temperature in Celsius: %f", tempC);


}
