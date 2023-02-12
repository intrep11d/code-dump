#include <stdio.h>

void main()
{
    int n, y, number=0;
  
    printf("Enter n: ");
    scanf("%d",&n);

    int numSet[n];
    printf("Enter elements:\n");
    
    for(int a=0;a<n;a++)
        scanf("%d",&numSet[a]);
    
    printf("Enter y: ");
    scanf("%d",&y);
    
    for(int a=0;a<n;a++)
    {
        if(numSet[a]==y)
            number++;
    }
  
    printf("FREQUENCY: %d", number);
  
}