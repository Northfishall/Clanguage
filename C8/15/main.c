#include <stdio.h>
#include <stdlib.h>

int createNumber(void); //产生随机数
int checkAllRight(int number,int guess);//计算出数字中位置和数字都相同的数量
int checkNumberRight(int number , int guess ,int allRight);//计算出数字中数字相同但是位数不同的数量
int main()
{
    int index;
    int times;
    int number;
    int guess;
    int flag=0;
    int allRight , numberRight;
    number = createNumber();
    printf("number is : %d \n",number);
    printf("please input the number of trying :");
    scanf("%d",&times);
    for(index=0;index<times;index++)
    {
        printf("please input the number you guess :");
        scanf("%d",&guess);
        allRight = checkAllRight(number,guess);
        if(allRight==4)
        {
            flag = 1;
            printf("Congratulation!");
            break;
        }
        numberRight = checkNumberRight(number,guess,allRight);
        printf("%dA%dB\n",allRight,numberRight);
    }
    if(flag==0)
        printf("The number is %d. You lose the game!",number);
    return 0;

}

int createNumber(void)
{
    int a,b,c,d;
    a = (rand()%10+1)%10; //a为最高位 保证不为0
    b = a;
    while(b==a)
    {
        b = (rand()%10 + a)%10;
    }
    c = b ;
    while(c==b || c == a)
    {
        c = (rand()%10 + a + b)%10;
    }
    d = c;
    while(d == c || d==a || d==b)
    {
        d = (rand()%10 + a + b + c )%10;
    }

    return a*1000+b*100+c*10+d;
}

int checkAllRight(int number ,int guess)
{
    int i ;
    int result=0;
    int a[4];
    int b[4];
    for(i=3;i>=0;i--)
    {
        a[i]=number%10;
        number = number/10;
        b[i]=guess%10;
        guess = guess/10;
    }
    for(i = 0 ;i<4;i++)
    {
        if(a[i]==b[i])
        {
            result++;
        }
    }
    return result;
}

int checkNumberRight(int number,int guess, int allRight)
{
    int i ,j;
    int result=0;
    int a[4];
    int b[4];
    for(i=3;i>=0;i--)
    {
        a[i]=number%10;
        number = number/10;
        b[i]=guess%10;
        guess = guess/10;
    }
    for(i = 0 ;i<4;i++)
    {
        for(j =0 ;j<4;j++)
        {
            if(a[i]==b[j])
            {
                result++;
            }
        }
    }
    result = result - allRight;
    return result;
}
