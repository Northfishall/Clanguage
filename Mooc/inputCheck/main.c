#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ,b;
    if(scanf("%d %d",&a,&b)==2)
    {
        printf("a = %d, b = %d\n",a,b);
    }
    else
        printf("Input error!");

    return 0;
}
