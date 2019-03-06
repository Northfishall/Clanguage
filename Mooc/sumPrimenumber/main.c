#include <stdio.h>
#include <stdlib.h>
int fun(int m);
int main()
{
    int number;
    int sum;
    sum = 0 ;
    for(number = 100 ;number <=200 ;number++)
    {
        if(fun(number))
        {
            printf("%d\n",number);
            sum +=number;
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}
int fun (int m)
{
    int index ;
    for(index = 2;index*index<=m;index++)
    {
        if(m%index==0)
            return 0;
    }
    return 1;
}
