#include <stdio.h>  
#include <string.h>  
int main()  

{  
    char str1[50], temp;  
    int i = 0, j =0, q=0;  
        printf ("Enter a string: ");  
        scanf( "%s", str1);  
    j = strlen (str1) - 1;  
 
            while ( i < j)   
            {  
 
            temp = str1[j];  
            str1[j] = str1[i];  
            str1[i] = temp;  
            i++; 
            j--;  
}  
 for(int x = 0; x < strlen(str1); x++) {  
        if(str1[x] != ' ')  
            q++;  
    }  
                
        printf ("Reversed: %s\n", str1);  
        printf("No. of Chars: %d\n",q);
        
        return 0;  
}
