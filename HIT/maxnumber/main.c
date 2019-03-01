#include <stdio.h>
#include <stdlib.h>
#define Number  10
int main()
{
    int index = 0;
    int max =-1;
    //int arrayNumber[Number];
    int inputData;
    for(index=0;index<Number;index++)//Êý¾ÝÊäÈë
    {
        //scanf("%d",&arrayNumber[index]);
        scanf("%d",&inputData);
        if(inputData > max)
        {
            max = inputData;
        }
    }
    printf("max=%d",max);

}
