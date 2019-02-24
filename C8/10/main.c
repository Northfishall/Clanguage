#include <stdio.h>
#include <stdlib.h>
#define N 10
int workOutNumber(int matrix[N][N] , int n);
int main()
{
    int indexRow;
    int n;
    int indexColumn;
    int matrix[N][N];
    int result;
    printf("please input the size of matrix:");
    scanf("%d",&n);
    for(indexRow = 0;indexRow <n ;indexRow++)
    {
        for(indexColumn=0 ; indexColumn<n ;indexColumn++ )
        {
            scanf("%d",&matrix[indexRow][indexColumn]);
        }
    }
    result = workOutNumber(matrix,n);
    printf("%d",result);
}

int workOutNumber(int matrix[N][N],int n)
{
    int i ,j;
    int sum = 0;
    for(i = 0;i<n;i++)
    {
        sum+= matrix[i][i];
    }
    for(i = 0 ,j = n-1;i<n;i++,j--)
    {
        sum+= matrix[i][j];
    }
    return sum;
}
