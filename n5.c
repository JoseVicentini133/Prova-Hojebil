#include <stdio.h>
#include <math.h>
int main(){
double H;
double C;
double CA;

printf("Me fale quantas unidades tem o primeiro cateto: ");
scanf("%lf", &C);

printf("Isso, agora me fale o segundo cateto: ");
scanf("%lf", &CA);

H = (pow(C, 2) + pow(CA, 2));
double result;
result = sqrt(H);

printf("A hipotenusa é de: %lf", result);

return 0;
}