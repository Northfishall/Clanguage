#include <stdio.h>
#include <stdlib.h>

int main()
{
    int probability[7] = {0};
    int roll;
    int number ;
    float rate;
    for(roll = 0 ;roll<6000 ;roll++)
    {
        number = rand()%6;
        probability[number+1]++;
    }
    for(int i = 1; i < 7;i++)
    {
        printf("%d    %f\n",i,(float)(probability[i])/6000);
    }
    return 0;
}
