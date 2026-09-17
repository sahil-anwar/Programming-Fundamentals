#include <stdio.h>
#include <string.h>

// Function to encode a word from the input text file
// and write its encoded value to the output text file
void encode(char *word, FILE *input_file, FILE *output_file)
{
    int i, length = strlen(word);
    char encoded[length];

    // Encode each character of the word according to the pattern
    for (i = 0; i < length; i++)
    {
        switch (word[i])
        {
            case 'A':
            case 'a':
                encoded[i] = '1';
                break;
            case 'E':
            case 'e':
                encoded[i] = '2';
                break;
            case 'I':
            case 'i':
                encoded[i] = '3';
                break;
            case 'O':
            case 'o':
                encoded[i] = '4';
                break;
            case 'U':
            case 'u':
                encoded[i] = '5';
                break;
            default:
                encoded[i] = word[i];
                break;
        }
    }

    // Write the encoded word to the output text file
    fprintf(output_file, "%s\n", encoded);
}

// Function to decode a word from the output text file
// and show its decoded value on the console
void decode(char *word)
{
    int i, length = strlen(word);

    // Decode each character of the word according to the pattern
    for (i = 0; i < length; i++)
    {
        switch (word[i])
        {
            case '1':
                printf("A");
                break;
            case '2':
                printf("E");
                break;
            case '3':
                printf("I");
                break;
            case '4':
                printf("O");
                break;
            case '5':
                printf("U");
                break;
            default:
                printf("%c", word[i]);
                break;
        }
    }
}
