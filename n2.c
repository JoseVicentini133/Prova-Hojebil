#include <stdio.h>
#include <math.h>
int main(){
    float km;
    float litro;

printf("Escreva a sua distacia que voce percorreu: ");
scanf("%f", &km);

printf("Me fale a quantidade de litros de gasosa que voce gastou: ");
scanf("%f", &litro);
float consumo = (km / litro);

printf("A sua distancia media de km por litro é de : %f litros por km rodado meu consagra", consumo);



    return 0;
}
