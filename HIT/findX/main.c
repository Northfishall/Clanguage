#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[200];
    int n ;
    int arrayLength;
    int x;
    int index;
    //int result = -1;
    scanf("%d",&n);
    for(arrayLength = 0;arrayLength<n;arrayLength++)
    {
        scanf("%d",&number[arrayLength]);
    }
    scanf("%d",&x);
    for(index = 0 ;index<n;index++)
    {
        if(number[index]==x)
        {
            //result = index;
            printf("%d",index);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
