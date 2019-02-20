#include <stdio.h>
#include <stdlib.h>

int main()
{
    int originalNumber = 4321;
    int a ,b ;
    a = originalNumber/100;
    b = originalNumber%100;
    printf("a=%d,b=%d\n",a,b);
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%.2f\n",(float)a/(float)b);
    printf("a%%b=%d\n",a%b);
    return 0;
}
