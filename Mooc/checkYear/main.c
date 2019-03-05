#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    int flag = scanf("%d",&year);
    if(year <= 0 || flag!=1)
    {
        printf("Input error!\n");
        return 0 ;
    }
    if((year%4==0 && year%100!=0) || year%400 == 0)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}
