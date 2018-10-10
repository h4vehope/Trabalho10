#include <stdio.h>
#include <pot.h>
int main () 
{
//variaveis
int of, val1, val2

//tela
printf("Digite a opção");
printf("1 - fatorial");
printf("2 - Expotencial");
scanf("%i",&op);

switch(op){
 case 1:
break;
 case 2:
printf("Digite o primeiro valor");
scanf("%i",&val1);
printf("Digite o segundo valor");
scanf("%i",&val2);
potencia(val1, val2);
break;
default;

printf("Opcao invalida");
}

}
