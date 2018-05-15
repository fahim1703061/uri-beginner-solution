#include <stdio.h>
int main()
{
    int num,wh;
    float salary;
    scanf("%d%d%f",&num,&wh,&salary);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",salary*wh);

    return 0;
}
