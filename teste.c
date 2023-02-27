#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

int i, j = 1, altura, espaço;

do{
    altura = get_int("Digite um número entre 1 e 8: ");
   // scanf("%d", &altura);  --> ESTA É OUTRA FORMA DE GUARDAR O VALOR INSERIDO PELO USUÁRIO!
}
    while(altura < 1 || altura > 8);

for(i = 0; i <= altura; i++){
    espaço = j;
    
    while(espaço >= 1){
        printf("#");
        espaço--;
    }

    j += 2;
    printf("\n");
}
return 0;
}