#include <stdio.h>
int main()
{
    char c;
    int Lower Vowel, Upper Vowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

  
    Lower Vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    
    Upper Vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

   
    if (Lower Vowel || Upper Vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
