#include <stdio.h>
#include <cs50.h>
#include <math.h>

int tamanho_i;
int tamanho_f;
int tamanho_atual;
int tempo = 0;
int crescim_pop = 0;

int main (void){
    do{
        tamanho_i = get_int("Digite o tamanho da população inicial: ");
    } 
    while(tamanho_i < 9);
    
    do{
        tamanho_f = get_int("Digite o tamanho final: ");
    }
    while(tamanho_f <= tamanho_i);
    
    tamanho_atual = tamanho_i;
    
    while(tamanho_atual < tamanho_f){
        tempo++;
        crescim_pop = (tamanho_atual / 3) - (tamanho_atual / 4);
        tamanho_atual += crescim_pop;
        
    }
    printf("\n A população irá atingir este tamanho em %i ano(s)", tempo);
    printf("\n");
}