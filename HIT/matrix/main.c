#include <stdio.h>
#include <stdlib.h>

int main()
{
    int indexTemp;
    int temp;
    int result[2][2];
    int a[2][3];
    int b[3][2];
    int indexRow;
    int indexColumn;
    for(indexRow = 0;indexRow<2;indexRow++)
    {
        for(indexColumn = 0;indexColumn<3;indexColumn++)
        {
            scanf("%d",&a[indexRow][indexColumn]);
        }
    }

    for(indexRow = 0;indexRow<3;indexRow++)
    {
        for(indexColumn = 0;indexColumn<2;indexColumn++)
        {
            scanf("%d",&b[indexRow][indexColumn]);
        }
    }
    for(indexRow=0;indexRow<2;indexRow++)
    {
        for(indexColumn=0;indexColumn<2;indexColumn++)
        {
            temp = 0;
            for(indexTemp=0;indexTemp<3;indexTemp++)
            {
                temp += a[indexRow][indexTemp]*b[indexTemp][indexColumn];
            }
            result[indexRow][indexColumn]=temp;
        }
    }
    for(indexRow=0;indexRow<2;indexRow++)
    {
        for(indexColumn=0;indexColumn<2;indexColumn++)
        {
            printf("%d ",result[indexRow][indexColumn]);
        }
        printf("\n");
    }
}
