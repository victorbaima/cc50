#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h> // BIBLIOTECA PADRÃO P/ CONVERTER STRING EM NUMBER!
#include <ctype.h>
#include <locale.h>

int main(int argc, string argv[])   // argv[1] É ONDE ESTARÁ A CHAVE INDICADA PELO USUÁRIO!
{
    char verifica[strlen(argv[1])];

        if(strlen(argv[1]) != 26)
        {
            printf("A chave deve conter 26 caracteres! \n");
            return 1;
        }
        for(int x = 0; x < strlen(argv[1]); x++)
        {
            verifica[x] = argv[1][x];

            if(isalpha(argv[1][x]) == false)
            {
                printf("A chave deve conter apenas letras!\n");
                return 1;
            }

            for(int y = 0; y < x; y++)
            {
                if(x <= 26 && verifica[x] == verifica[y])
                {
                    printf("A chave não pode conter letras repetidas!\n");
                    return 1;
                }
            }
        }
            string entrada = get_string("Texto simples: ");
            int tamanho = strlen(entrada);
            char saida[tamanho];    // SÁIDA TERÁ O MESMO TAMANHO DA ENTRADA
            char alfa_min[27] = {'a'};
            char alfa_mai[27] = {'A'};

            for(int n = 0; n <= tamanho; n++)
            {
                for(int i = 0; i <= 26; i++)
                {
                    alfa_min[i] = alfa_min[0] + i;
                    alfa_mai[i] = alfa_mai[0] + i;

                    if(entrada[n] == alfa_min[i])
                    {
                        if(islower(verifica[i]))
                        {
                            saida[n] = verifica[i];
                        }
                        else
                        {
                            saida[n] = verifica[i] + 32;
                        }
                    }
                    
                    if(entrada[n] == alfa_mai[i])
                    {
                        if(isupper(verifica[i]))
                        {
                            saida[n] = verifica[i];
                        }
                        else
                        {
                            saida[n] = verifica[i] + 32;
                        }
                    }
                    
                    if(isalpha(entrada[n]) == false)
                    {
                        saida[n] = entrada[n];
                    }
                }
            }
            printf("Texto criptografado: %s\n", saida);
              return 0;
}