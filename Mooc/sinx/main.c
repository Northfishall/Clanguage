#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=-1;
    double x;
    double result;
    double number = 1;
    double mulitNumber = 1;
    double upx ;
    int count = 0;
    printf("Input x:\n");
    scanf("%lf",&x);
    upx = x;
    mulitNumber = 1;
    result = 0;
    while(fabs(upx/mulitNumber)>0.00001 )//|| flag == 0
    {
        result += upx/mulitNumber;
        upx=upx*x*x*i;
        mulitNumber = mulitNumber*(number+1)*(number+2);
        number = number+2;
        count++;
    }
    result += upx/mulitNumber;
    count++;
    printf("sin(x)=%.3f,count=%d\n",result,count);
    return 0;
}
