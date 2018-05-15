#include <stdio.h>
int main()
{
    int d;
    double f;
    scanf("%d%lf",&d,&f);
    printf("%0.3lf km/l\n",d/f);

    return 0;
}
