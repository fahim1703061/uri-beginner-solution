#include <stdio.h>
#define pi 3.14159
int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);
    printf("TRIANGULO: %0.3lf\n",0.500*A*C);
    printf("CIRCULO: %0.3lf\n",pi*C*C);
    printf("TRAPEZIO: %0.3lf\n",0.5*(A+B)*C);
    printf("QUADRADO: %0.3lf\n",B*B);
    printf("RETANGULO: %0.3lf\n",A*B);

    return 0;
}
