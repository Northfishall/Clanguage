#include <stdio.h>
#include <stdlib.h>

int checkEcho(int n);//ÅÐ¶Ï»ØÎÄÊý
int main()
{
    int flag = 0;
    int index;
    int number ;
    int n;
    int numberSum = 0;
    scanf("%d",&n);
    if(n>1000 || n <100)
        printf("wrong number !");
    for(number = n ;number >= 2 ;number --)
    {
        if(number%2==0)
            continue;
        for(index = 3;index*index <=number ;index++)
        {
            if(number % index == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag != 1)
        {
            if(checkEcho(number))
            {
                printf("%d \n",number);
                numberSum++;
            }
        }
        flag = 0;
    }
    printf("1\n");
    numberSum++;
    printf("the number of number is %d ",numberSum);
    return 0;
}

int checkEcho(int n)
{
    int one ,ten, hundred;
    if(n<10)
        return 1;
    else if (n>=10 && n<100)
    {
        ten = n /10;
        one = n%10;
        if(ten == one)
            return 1;
        else
            return 0;
    }
    else
    {
        hundred = n/100;
        one = n%10;
        if(hundred == one)
        {
            return 1;
        }
        else
            return 0;
    }
}
