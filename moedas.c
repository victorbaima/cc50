#include <stdio.h>
#include <cs50.h>
#include <math.h>

double troco, resto;

int moeda1,
moeda050,
moeda025,
moeda010,
moeda005,
moeda001;

double valor1 = 1.00, 
valor050 = 0.50, 
valor025 = 0.25, 
valor010 = 0.10, 
valor005 = 0.05, 
valor001 = 0.01;
 
int main(void){
    do{
        troco = get_float("Digite o valor do troco: ");
    }
    while(troco <= 0); // OU SEJA, SE O TROCO FOR MENOR OU IGUAL A ZERO, PERGUNTE DE NOVO!
    
    printf("\n\t O troco deverá conter: \n\n");
    
    if(troco > valor1){
        moeda1 = troco / valor1;
        resto = troco - (moeda1 * valor1);
        printf("%d", moeda1);
        printf(" moeda(s) de 1 real!");
        printf("\n");
    }
    
     if(resto > valor050){
        moeda050 = resto / valor050;
        resto = resto - (moeda050 * valor050);
        printf("%d", moeda050);
        printf(" moeda(s) de 50 centavos!");
        printf("\n");
    }
    if(resto > valor025){
        moeda025 = resto / valor025;
        resto = resto - (moeda025 * valor025);
        printf("%d", moeda025);
        printf(" moeda(s) de 25 centavos!");
        printf("\n");
    }
    if(resto > valor010){
        moeda010 = resto / valor010;
        resto = resto - (moeda010 * valor010);
        printf("%d", moeda010);
        printf(" moeda(s) de 10 centavos!");
        printf("\n");
    }
    if(resto > valor005){
        moeda005 = resto / valor005;
        resto = resto - (moeda005 * valor005);
        printf("%d", moeda005);
        printf(" moeda(s) de 5 centavos!");
        printf("\n");
    }
    if(resto > valor001){
        moeda001 = resto / valor001;
        resto = resto + 0.001 - (moeda001 * valor001);
        printf("%d", moeda001);
        printf(" moeda(s) de 1 centavo!");
        printf("\n");
    }
    printf("\n");
}