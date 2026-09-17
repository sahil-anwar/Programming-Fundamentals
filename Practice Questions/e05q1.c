#include<stdio.h>
vowel(char vowel)
{
    printf("\nEnter any Character:",vowel);
    scanf("%c",&vowel);

    switch(vowel)
    {
        case 'A':
        printf("\nVowel");
        break;

        case 'a':
        printf("\nVowel");
        break;

        case 'E':
        printf("\nVowel");
        break;

        case 'e':
        printf("\nVowel");
        break;

        case 'I':
        printf("\nVowel");
        break;

        case 'i':
        printf("\nVowel");
        break;

        case 'O':
        printf("\nVowel");
        break;

        case 'o':
        printf("\nVowel");
        break;

        case 'U':
        printf("\nVowel");
        break;

        case 'u':
        printf("\nVowel");
        break;

        default:
        printf("\nit is not a vowel");
    }
}
int main()
{
   char x;
     vowel(x);
    return 0;
}