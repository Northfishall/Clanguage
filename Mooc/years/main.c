#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birthyear;
    int thisyear;
    int sum = 0;
    int index;
    printf("Input your birth year:");
    scanf("%d",&birthyear);
    printf("Input this year:");
    scanf("%d",&thisyear);
    for(index = birthyear;index<=thisyear;index++)
    {
        if(index%400 == 0 ||(index%4==0 && index%100!=0))
        {
            printf( "%d\n",index);
            sum++;
        }
    }
    printf("count=%d\n",sum);
    return 0;
}
