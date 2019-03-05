#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int temp;
    int flag = 0;
    printf("Please enter the number:\n");
    scanf("%d",&n);
    temp =n;
    if(n>=10000 || n <=0)
    {
        printf("error!\n");
        return 0;
    }
    while(n!=0)
    {
        n = n/10;
        flag++;
    }
    switch(flag)
    {
    case 1:
        printf("%d: 0-9\n",temp);
        break;
    case 2:
        printf("%d: 10-99\n",temp);
        break;
    case 3:
        printf("%d: 100-999\n",temp);
        break;
    case 4:
        printf("%d: 1000-9999\n",temp);
        break;
    default:
        ;
    }
    return 0;
}
