#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h> // BIBLIOTECA PADRÃO P/ CONVERTER STRING EM NUMBER!
#include <ctype.h>
#include <locale.h>

int main(int argc, string argv[])   // argv[1] É ONDE ESTARÁ A CHAVE INDICADA PELO USUÁRIO!
{

        if(argc != 2)
        {
            printf("Digite ./teste chave: \n");
            return 1;
        }
            int chave = atoi(argv[1]);    // CONVERTE A STRING EM NUMBER
            string entrada = get_string("Texto simples: ");
            int tamanho = strlen(entrada);
            char saida[tamanho];    // SÁIDA TERÁ O MESMO TAMANHO DA ENTRADA
            char alfa_min[27] = {'a'};  // 97 a 122
            char alfa_mai[27] = {'A'};  // 65 a 90
            int nova_chave = chave;
            
            for(int n = 0; n < tamanho; n++)
            {
             for(int i = 0; i < 26; i++)
                {
                    alfa_min[i] = alfa_min[0] + i;
                    alfa_mai[i] = alfa_mai[0] + i;
                    nova_chave = (chave + i) % 26;
                    
                    if(entrada[n] == alfa_mai[i])
                    {
                        saida[n] = alfa_mai[0] + nova_chave;
                    }
                    if(entrada[n] == alfa_min[i])
                    {
                        saida[n] = alfa_min[0] + nova_chave;
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