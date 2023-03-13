#include <stdio.h>
#include <cs50.h>
#include <string.h>

string texto;
int s;          // NÚMERO DE SENTENÇAS
int p = 1;      // NÚMERO DE PALAVRAS
int l = 1;      // NÚMERO DE LETRAS
float media_l;    // MÉDIA DO NÚMERO DE LETRAS POR 100 PALAVRAS
float media_s;    // MÉDIA DE SENTENÇAS POR 100 PALAVRAS
int indice;

int main(void)
{
    texto = get_string("Texto: ");
    
    for(int i = 0 ; i <= strlen(texto); i++)
    {
        if((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z'))
        {
            l++;
        }
        if(texto[i] == ' ')
        {
            p++;
        }
        if(texto[i] == '.' || texto[i] == '?' || texto[i] == '!')
        {
            s++;
        }
    }
    
    media_l = ((float) l / p) * 100;
    media_s = ((float) s / p) * 100;
    indice = 0.0588 * media_l - 0.296 * media_s - 15.8;
    
    if(indice >= 16)
    {
       printf("Grau 16+\n");
    }
    if(indice > 1 && indice < 16)
    {
       printf("Grau %i\n", indice);
    }
    if(indice < 1)
    {
        printf("Abaixo do grau 1\n");
    }
}
    