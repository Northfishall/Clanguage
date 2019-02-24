#include <stdio.h>
#include <stdlib.h>
#define N 10
void matrixAdd(int matrixA[N][N],int matrixB[N][N],int matrixResult[N][N],int m ,int n);
int main()
{
    int m ,n;
    int matrixA[N][N];
    int matrixB[N][N];
    int matrixResult[N][N];//结果矩阵
    int indexArow ,indexAcolumn;
    int indexBrow ,indexBcolumn;
    printf("please input m,n");
    scanf("%d,%d", &m ,&n);
    printf("please input matrix A : \n");
    for(indexArow=0;indexArow<m ;indexArow++)//双重循环读取A矩阵
        for(indexAcolumn=0; indexAcolumn<n ;indexAcolumn++)
        {
            scanf("%d",&matrixA[indexArow][indexAcolumn]);
        }
    printf("please input matrix B : \n");
    for(indexBrow=0 ;indexBrow<m ;indexBrow++)//读取B矩阵
        for(indexBcolumn=0;indexBcolumn<n;indexBcolumn++)
        {
            scanf("%d",&matrixB[indexBrow][indexBcolumn]);
        }
    matrixAdd(matrixA,matrixB,matrixResult,m,n);
    printf("result matrix is :\n");
    for(indexArow=0;indexArow<m;indexArow++)
    {
        for(indexAcolumn=0;indexAcolumn<n;indexAcolumn++)
        {
            printf("%d ",matrixResult[indexArow][indexAcolumn]);
        }
        printf("\n");
    }
}

void matrixAdd(int matrixA[N][N],int matrixB[N][N],int matrixResult[N][N],int m ,int n)
{
    int indexRow ,indexColumn;
    for(indexRow=0;indexRow<m;indexRow++)
        for(indexColumn=0;indexColumn<n;indexColumn++)
        {
            matrixResult[indexRow][indexColumn]= matrixA[indexRow][indexColumn] + matrixB[indexRow][indexColumn];
        }
    return ;
}
