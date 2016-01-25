#include <stdio.h>

int main(void)
{
    int i;
    printf("[");
    
    for (i = 0; i < 4; i++)
    {    
        int n[4] = {1, 7, 3, 4}; /* putting the array inside this for loop, allows it to reset to these values each turn of loop */
        int j;
        
        for (j = 0; j < 1; j++) /* prints this loop only once each turn of the for (i) loop */
        {
            n[i] = 1; /* no need to define n here */
            int prod = n[0] * n[1] * n[2] * n[3];
            printf("%d", prod);
            
            if (i <= 2)
            {
                printf(", "); /* stops printing a comma & space at index 2 of array */
            }
        }
        
    }
    printf("]\n");
    
    return 0;
}
