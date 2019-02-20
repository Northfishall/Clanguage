#include <stdio.h>
#include <stdlib.h>

int main()
{
    double rate;
    int n ;
    double capital;
    printf("Please enter rate, year, capital:\n");
    scanf("%lf,%d,%lf", &rate, &n, &capital);
    for(;n>0;n--)
    {
        capital +=capital*rate;
    }
    printf("deposit=%.3f\n",capital);
    return 0;
}
