#include<stdio.h>

int main()
{
    int x; 
    int n=1; 
    int *pN=&n; 
    int *pT=&x; 
    printf("Enter your number: ");
    scanf("%d", &x); 

    
    for(int i=1; i<=*pT; i++)
    {
        for(int i=1; i<=*pT; i++)
        {
            if(i==*pT)
                ++*pN;      
            printf("%d ", *pN);
        }
        printf("\n");
    }
    


    

    return 0;
        
}
