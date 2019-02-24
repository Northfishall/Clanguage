#include <stdio.h>
#include <stdlib.h>

int main()
{
    int indexInput = 0;
    int max = 0;
    int indexMax = 0;
    int min = 9999;
    int indexMin = 0;
    int list[10];
    int temp;
    printf("Please input number:");
    while(indexInput<10)
    {
        scanf("%d",&list[indexInput]);
        indexInput++;
    }
    for(int i = 0 ;i<10 ;i++)
    {
        if(list[i]<min)
        {
            min = list[i];
            indexMin = i;
        }
        if(list[i]>max)
        {
            max = list[i];
            indexMax = i;
        }
    }
    temp = list[indexMax];
    list[indexMax] = list[indexMin];
    list[indexMin] = temp;
    for(int i =0 ;i<10 ; i++)
    {
        printf("%d",list[i]);
    }
    return 0;
}
