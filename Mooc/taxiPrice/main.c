#include <stdio.h>
#include <stdlib.h>

int main()
{
    float way;
    int waitTime;
    float fee = 0;
    printf("Input distance and time:");
    scanf("%f,%d",&way,&waitTime);
    if(way <= 3)
    {
        fee += 8;
    }
    else if (way > 3 && way <=10)
    {
        fee += 8;
        fee += (way-3)*2;
    }
    else
    {
        fee += 8;
        fee += (10-3)*2;
        fee += (way-10)*3;
    }
    if(waitTime<5)
    {
        ;
    }
    else
    {
        fee += waitTime/5*2;
    }
    printf("fee = %.0f\n",fee);
    return 0;
}
