#include <stdio.h>

int main()
{
   int i, j;
   char str[100];

   printf("\nString::\t");
   gets(str);

   printf("\nPlease choose following options:\n");
   printf("1:Encryption.\n");
   printf("2:Decryption.\n");
   scanf("%d", &j);

   switch(j)
   {
   case 1:
      for(i = 0; (i < 10 && str[i] != '\0'); i++)
        str[i] = str[i] + 3; 

      printf("\nEncrypted string: %s\n", str);
      break;

   case 2:
      for(i = 0; (i < 10 && str[i] != '\0'); i++)
        str[i] = str[i] - 3; 
      printf("\nDecrypted string: %s\n", str);
      break;

   default:
      printf("\nNot encrypted\n");
   }
   return 0;
}