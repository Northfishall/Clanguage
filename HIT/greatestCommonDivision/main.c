#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ,b;
    int n ;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a == b)
    {
        printf("%d",a);
        return 0;
    }
    if(a < b)
    {
        n = b;
        b = a;
        a = n;
    }
    while(a%b!=0)
    {
        n = a%b;
        a = b;
        b = n;
    }
    printf("%d",b);
    return 0;
}
