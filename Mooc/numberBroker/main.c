#include <stdio.h>
#include <stdlib.h>

int main()
{
    int originalNumber;
    int a ,b ;
    printf("Please input n:\n");
    scanf("%d",&originalNumber);
    a = abs(originalNumber/100);
    b = abs(originalNumber%100);
    if(originalNumber<0)
    {
        a=-a;
        b=-b;
    }
    printf("%d,%d\n",a,b);
    printf("sum=%d,sub=%d,multi=%d\n",a+b,a-b,a*b);
    if(b==0)
    {
        printf("The second operator is zero!\n");
    }
    else
    {
        printf("dev=%.2f,mod=%d\n",((float)a)/b,a%b);
    }
    return 0;
}
