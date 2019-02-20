#include <stdio.h>
#include <stdlib.h>

int** matrix_multiplication(int a[2][3] ,int b[3][2])
{
    int temp = 0;
    int result[2][2]={0};
    for(int index_row =0 ; index_row<2 ; index_row++)
    {
        for(int index_column = 0 ; index_column<2 ; index_column++)
        {
            for(int index_in = 0 ; index_in <3;index_in++)
            {
                temp+=a[index_row][index_in]*b[index_in][index_row];
            }
            memcpy(resule[index_row][index_column] , temp,1);
            temp = 0;
        }
    }
    return result;
}

int main()
{
    int a[2][3] = {1,2,3,4,5,6};
    int b[3][2] = {1,2,3,4,5,6};
    int result[2][2];
    result = matrix_multiplicantion(a,b);
    for(int i =0;i<2;i++)
        for(int j = 0 ;j<2;j++)
        {
            printf("%d",result[i][j]);
        }

    return 0;
}
