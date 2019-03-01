#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int index;
    scanf("%d",&number);
    if(number<0 || number ==1 || number == 0)
        {
            printf("no");
            return 0;
        }
    if(number %2 == 0 )
        {
            printf("no");
            return 0;
        }
    for(index = 3 ;index*index<=number ;index++)
    {
        if(number%index == 0)
            {
                printf("no");
                return 0;
            }
    }
    printf("yes");

    return 0;
}
