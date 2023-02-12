#include<stdio.h>

int main(void) {
	float dollar,k,a,b,c,d,e,f,g,h,i,j,l,m;
    printf("Enter amount (USD): ");
    scanf("%f",&dollar);
    printf("\nAmount (USD): $%.2f",dollar);
    printf("\nAmount (Peso): $%.2f",dollar*49.2);
        k = dollar*49.2;
        a = (int)k/1000;
        g = a*1000;
    printf("\n1000 peso bill = %d = Php %.2f",(int)a,a*1000);
        b = ((int)k-(int)g)/500;
        h = g + b*500;
    printf("\n500 peso bill = %d = Php %.2f",(int)b,b*500);
        c = ((int)k-(int)h)/100;
        i = h + c*100;
    printf("\n100 peso bill = %d = Php %.2f",(int)c,c*100);
        d = ((int)k-(int)i)/20;
        j = i + d*20;
    printf("\n20 peso bill = %d = Php %.2f",(int)d,d*20);
        e = ((int)k-(int)j)/5;
        l = j + e*5;
    printf("\n5 peso coin = %d = Php %.2f",(int)e,e*5);
        f = ((int)k-(int)l)/1;
        m = l + f*1;
    printf("\n1 peso coin = %d = Php %.2f",(int)f,f*1);
    printf("\nTOTAL: Php %.2f",m);
        return 0;
}