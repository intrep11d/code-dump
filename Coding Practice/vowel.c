#include<stdio.h>

void main(){
    char letter;
    

    printf("Enter letter: ");
    scanf("%c",&letter);
    
    (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' 
    || letter == 'u' || letter == 'A' || letter == 'E' 
    || letter == 'I' || letter == 'O' || letter == 'U') 
    ? printf("Vowel") : printf("Consonant");
}   