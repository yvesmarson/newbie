#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// My first enciphering program! -Yves T.

int main(int argc, char* argv[]) // char* also string
{
    int k = atoi(argv[1]);
    int modk = k % 26; // modulo of keyword
    
    if (argc != 2 || k <= 0)
    {
        printf("Please try a positive number\n");
        return 1; // will prompt message if number is equal to or less than zero
                  // or will return error if no 2nd command line argument was given
    }
    
    else
    {
        printf("Message: ");
        string msg = GetString();
        
        printf("Ciphertext: ");
        for (int i = 0; i < msg[i]; i++)
            if (isupper(msg[i]))
            {
                int uppercase = msg[i] + modk; // for uppercase letters
                    if (uppercase > 90) // because uppercase Z is 90 in ASCII
                    {
                        printf("%c", (uppercase - 26)); // formula to wrap around for uppercase letter
                    }
                    else
                    {
                        printf("%c", uppercase); // returns uppercase as given by user
                    }
            }
            
            else if (islower(msg[i]))
            {
                int lowercase = msg[i] + modk;
                    if (lowercase > 122) // because lowercase z is 122 in ASCII
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
