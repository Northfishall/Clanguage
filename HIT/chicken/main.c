#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float z;
    int n ;
    scanf("%d",&n);
    for(x = 0 ; x<n/5;x++)
    {
        for(y = 0;y<100-x;y++)
        {
            z = 100 -x -y;
            if(x*5+y*3+z/3<=n)
            {
                printf("x=%d,y=%d,z=%d\n",x,y,(int)z);
            }
        }
    }
    return 0;
}
