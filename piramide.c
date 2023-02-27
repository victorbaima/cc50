#include <stdio.h>
#include <cs50.h>

int x, i, j;

int main(void)
{
 do{
        x = get_int("Digite um número entre 1 e 8: ");
    }
    while(x<1 || x>8);
        
       for(i = 1; i <= x; i++)
        {
            for(j = x - 1; j >= i; j--)
            printf(" ");
                for(j = 1; j <= i; j++)
                printf("#");
                printf("  ");
                    for(j = 1; j <= i; j++)
                printf("#");
                printf("\n");
        }    
}