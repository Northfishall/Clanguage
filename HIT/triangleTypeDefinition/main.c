#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b, c;
    int max = 0 ;
    int smalla = 0 ,smallb = 0;
    int i ;
    int temp;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c)
    {
        max =a ;
        smalla = b;
        smallb = c;
    }
    else if (b>a && b>c)
    {
        max = b ;
        smalla = a;
        smallb = c;
    }
    else if (c >a && c>b)
    {
        max =c ;
        smalla = b;
        smallb = a;
    }
    else if (a == b == c )
    {
        printf("���������");
        return 0;
    }
    else
    {
        printf("���������");
        return 0;
    }
    temp = smalla*smalla + smallb*smallb;
    if(max*max >temp)
    {
        printf("�۽�������");
    }
    else if(max * max  == temp )
    {
        printf("ֱ��������");
    }
    else if (max *max < temp )
    {
        printf("���������");
    }
    return 0;
}
