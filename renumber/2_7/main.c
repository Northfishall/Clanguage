#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a = 2;
    float b = 3;
    float c = 1;
    float x1 ,x2;
    float alpha;
    alpha = b*b - 4*a*c;
    x1 =  -b/a/2 +sqrt(alpha)/a/2;
    x2 = -b/a/2 - sqrt(alpha)/a/2;
    printf("x1=%.4f\n",x1);
    printf("x2=%.4f\n",x2);
    return 0;
}
