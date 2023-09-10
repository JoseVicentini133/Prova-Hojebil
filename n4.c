#include <stdio.h>
#include <math.h>
int main(){
double C;
double F;

printf("Primeiramente digite os graus em Fahrenheit: ");
scanf("%lf", &F);
C = (F - 32) / 1.8;
printf("Essa e a sua contra parte em celsius: %lf", C);

    return 0;
}