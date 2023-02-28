#include <stdio.h>
#include <cs50.h>
#include <math.h>

long cartao;
int digito;
int somador = 0;
int soma_total = 0;
int contador = 0;

int main (void){
    do{
        cartao = get_long("Digite o númemro do cartão: ");
    }
    while(cartao <= 0);

    while(cartao > 0){
        contador++;
        digito = cartao % 10;
        cartao = cartao / 10;

        if(contador % 2 == 0){
            somador = digito * 2;
            if(somador > 9){
            somador = (somador % 10) + (somador / 10);
            }
        } else{
            somador = digito;
        }
        soma_total += somador;
   }
    if(soma_total % 10 == 0){
        if(contador == 15 && digito == 3){
            printf("\n AMERICAN EXPRESS");
        }
        if(contador == 16 && digito == 5){
            printf("\n MASTERCARD");
        }
        if((contador == 16 || contador == 13) && (digito == 4)){
            printf("\n VISA");
        }
        printf("\n Cartão válido!");
    } else{
        printf("\n CARTÃO INVÁLIDO!!!");
    }
    printf("\n");
}