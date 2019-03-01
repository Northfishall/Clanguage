#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index;
    int sum;
    int part;
    int n;
    int flag = 0;
    sum = 0;
    scanf("%d",&n);
    for(index = 2 ;index<n;index++)
    {
        part = 2;
        sum = 1;
        while(part != index )
        {
            if(index%part == 0)
            {
                sum+=part;
            }
            part++;
        }
        if(sum == index)
        {
            if(flag!=0)
            {
                printf(" ");
            }
            printf("%d",sum);
            flag++;
        }
    }

    return 0;
}
