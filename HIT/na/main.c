#include <stdio.h>
#include <stdlib.h>

int main()
{
    int longResult[1001] = {0};
    int indexLength = 1000;
    int n ;
    int temp = 0;
    int a ;
    int up=0 ;
    int times;
    int index ;
    scanf("%d",&a);
    scanf("%d",&n);
    times = n;
    for(index = 0 ;index<n ;index++)
    {
        if(up == 0)
        {
            temp = (times*a);
            up = temp/10;
            longResult[indexLength--] = temp %10;
        }
        else
        {
            temp = (times*a)+up;
            up = temp /10;
            longResult[indexLength--] = temp %10;
        }
        times--;
    }
    while(up>0)
    {
        longResult[indexLength--] = up%10;
        up = up /10;
    }
    indexLength++;
    for(index = indexLength ;index<1001;index++)
        printf("%d",longResult[index]);
    //printf("%ulld",result);
    return 0;
}
