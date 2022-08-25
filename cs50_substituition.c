#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Determina a quantidade de argumentos
int main ( int argc, string argv [])
{
  if (argc !=2)
  {
    printf("Usage: ./Substituition key\n");
    return 1;
  }

  string key = argv[1];
  for (int i = 0; i < strlen(key); i ++)
   {
       if (!isalpha(key[i]))
       {
        printf("Usage: ./Substituition key\n");
        return 1;
       }
   }

  //Determina o tamanho da chave
   if (strlen(key)!=26)
   {
     printf("Key must contain 26 characters.\n");
     return 1;
   }

   for (int i = 0; i < strlen(key); i++)
   {
      for (int j = i + 1; j< strlen(key); j++)
       {
        if (toupper ( key[i]) == toupper (key[j]))
        {
            printf("Usage: ./Substituition key\n");
            return 1;
        }
        }
    }

       string plaintext = get_string("plaintext: ");

       //Imprime o texto cifrado
       for (int i = 0; i < strlen(key); i++)
       {
         if (islower(key[i]))
           {
            key[i] = key [i] - 32;
           }
       }
           printf("ciphertext: ");

           for (int i = 0 ; i < strlen(plaintext); i ++)
           {
             if ( isupper (plaintext[i]))
             {
                int letter = plaintext[i] - 65;
                printf("%c", key[letter]);
             }

             else if (islower(plaintext[i]))
             {
                int letter = plaintext[i] - 97;
                printf ( "%c", key[letter] + 32);
             }
             else printf("%c", plaintext[i]);

           }
           printf("\n");
   }

