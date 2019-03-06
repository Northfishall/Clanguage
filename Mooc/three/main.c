#include <stdio.h>
#include <stdlib.h>

int main()
{
    int man , woman , children;
    printf("Man   Women   Children\n" );
    for(man = 0; man <16;man++)
    {
        for(woman = 0;woman <30-man;woman++)
        {
            children = 30-man-woman;
            if(man*3+woman*2+children==50)
            {
                printf("%3d%8d%8d\n",man,woman,children);
            }
        }
    }

    return 0;
}
