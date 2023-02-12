#include<stdio.h>


int main()
    {
      //Receive trade value
        int tradeSize;
        float rate;

        printf("Enter value of trade: ");
        scanf("%d", &tradeSize);
      //Decide rate according to size

        if(tradeSize < 2500){
            rate = 30 +  (tradeSize * 0.017);
        }
        else if(tradeSize >= 2500 && tradeSize < 6250){
            rate = 56 + (tradeSize * 0.0066);
        }
        else if(tradeSize >= 6250 && tradeSize < 20000){
            rate = 76 + (tradeSize * 0.0034);
        }
        else if(tradeSize >= 20000 && tradeSize < 50000){
            rate = 100 + (tradeSize * 0.0022);
        }
        else if(tradeSize >= 50000 && tradeSize < 500000){
            rate = 155 + (tradeSize * 0.0011);
        }
        else if(tradeSize >= 500000){
            rate = 255 + (tradeSize * 0.0009);
        }
        else if(tradeSize <= 39){
            rate = 39;
        }
            
        

        printf("Commission: $%.2f", rate);
    }




