#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int result = 0;
    int flag = 100 ;
    printf("Input x:\n");
    scanf("%d",&number);
    if(number<0)
        number = abs(number);
    while(flag > 0 )
    {
        result+= number/flag * 100/flag;
        number%=flag;
        flag/=10;
    }
    printf("y=%d\n",result);
}
