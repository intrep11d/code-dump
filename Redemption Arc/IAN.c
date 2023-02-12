#include<stdio.h>

unsigned long long bin_to_dec(unsigned long long binary);
unsigned long long dec_to_bin(unsigned long long decimal);

unsigned long long decimal, binary, power=1;

int main(){
    int response;
    while(1){
        printf("\n\nEnter:\n");
        printf("0   -   To end program\n");
        printf("1   -   To convert a decimal number to a binary number\n");
        printf("2   -   To convert a binary number to a decimal number\n\n");

        scanf("%d", &response);
        if(response==0){
            return 0;
        } 
        else if(response==1){
            printf("\n\nEnter decimal number: ");
            scanf("%llu", &decimal);
            printf("\nBinary equivalent of decimal number: %llu", dec_to_bin(decimal));
        }
        else if(response==2){
            printf("\n\nEnter binary number: ");
            scanf("%llu", &binary);
            printf("\nDecimal equivalent of binary number: %llu", bin_to_dec(binary));
        }
        else{
            printf("\n\nINVALID INPUT");
        }
    }
}

unsigned long long dec_to_bin(unsigned long long decimal){
    power = 1;
    binary = 0;

    while(decimal!=0){
        binary += (decimal % 2) * power;
        power *= 10;
        decimal /= 2;
    }

    return binary;
}

unsigned long long bin_to_dec(unsigned long long binary){
    power = 1;
    decimal = 0;

    while(binary!=0){
        decimal += (binary % 10) * power;
        power *= 2;
        binary /= 10;
    }

    return decimal;
}