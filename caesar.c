#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int k = atoi(argv[1]);
    int modk = k % 26;
    
    if (argc != 2 || k <= 0)
    {
        printf("Please try a positive number\n");
        return 1;
    }
    
    else
    {
        printf("Message: ");
        string msg = GetString();
        
        printf("Ciphertext: ");
        for (int i = 0; i < msg[i]; i++)
            if (isupper(msg[i]))
            {
                int uppercase = msg[i] + modk;
                    if (uppercase > 90)
                    {
                        printf("%c", (uppercase - 26));
                    }
                    else
                    {
                        printf("%c", uppercase);
                    }
            }
            
            else if (islower(msg[i]))
            {
                int lowercase = msg[i] + modk;
                    if (lowercase > 122)
                    {
                        printf("%c", (lowercase - 26));
                    }
                    else
                    {
                        printf("%c", lowercase);
                    }
            }
        
            else
            {
                printf("%c", msg[i]); // to print non-alphabetical char
            }
    }
    printf("\n");
    return 0;
}
