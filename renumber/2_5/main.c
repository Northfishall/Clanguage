#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Divisor = -11;
    int divisor = 5 ;
    int negativeResult ,positiveResult;
    negativeResult=Divisor%divisor;
    positiveResult = negativeResult+divisor;
    printf("negative: %d\n",negativeResult);
    printf("positive: %d\n",positiveResult);
    return 0;
}
