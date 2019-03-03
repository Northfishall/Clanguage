#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    int data[21];
    int maxNumber;
    int maxIndex;
    int minNumber;
    int minIndex;
    int i;
    maxNumber = -9999;
    minNumber = 9999;
    scanf("%d",&n);
    for(i = 0 ; i< n; i++)
    {
        scanf("%d",&data[i]);
    }
    if(n==1)
        printf("%d",data[0]);
    else
    {
        for(i=0;i<n;i++)
        {
            if(data[i]>maxNumber)
            {
                maxNumber = data[i];
                maxIndex = i;
            }
            if(data[i]<minNumber)
            {
                minNumber = data[i];
                minIndex = i;
            }
        }
        i = data[maxIndex];
        data[maxIndex] = data[minIndex];
        data[minIndex] = i;
    }
    for(i =0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
    return 0;
}
