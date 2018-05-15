#include <stdio.h>
int main()
{
    int p1,p2,n1,n2;
    float c1,c2;
    scanf("%d%d%f",&p1,&n1,&c1);
    scanf("%d%d%f",&p2,&n2,&c2);
    printf("VALOR A PAGAR: R$ %0.2f\n",(n1*c1)+(n2*c2));
    return 0;
}
