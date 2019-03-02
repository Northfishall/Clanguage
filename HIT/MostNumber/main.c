#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[11] = {0};
    int n;
    int resultTimes = -1 ;
    int resultIndex = 0;
    int index;
    for(index = 0 ;index<20;index++)
    {
        scanf("%d",&n);
        number[n]++;
    }
    for(index = 1 ;index<11;index++)
    {
        if(number[index]>resultTimes)
        {
            resultIndex = index;
            resultTimes = number[index];
        }
    }
    printf("%d",resultIndex);
    return 0;
}
