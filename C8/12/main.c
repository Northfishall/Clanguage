#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index;
    int year[12];
    year[0]=1;
    year[1]=2;
    for(index=2;index<12;index++)
    {
        year[index]=year[index-1]+year[index-2];
    }
    printf("rabbit's number is : %d",year[--index]);
    return 0;
}
