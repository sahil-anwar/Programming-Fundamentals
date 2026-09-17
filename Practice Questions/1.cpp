#include<stdio.h>
int main()
{
	char alphabet;
	printf("Enter an alphabet: ");
	scanf("%c",&alphabet);
	switch(alphabet){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("%c is VOWEL", alphabet);  
            break;  
        default: printf("%c is CONSONANT", alphabet);  
	}
	return 0;
}