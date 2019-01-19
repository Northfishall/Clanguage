#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    百万富翁问题:一个百万富翁遇到一个陌生人,陌生人找他谈了一个换钱的计划。该计划如下:我每天给你10万元,你第一天给我1分钱,第二天2分钱,第三天4分钱。。。

这样交换30天后,百万富翁交出了多少钱?陌生人交出了多少钱?(注意一个是万元,一个是分)

输出格式要求: %ld 输出,单位是元
    */
    double RichPay = 0;
    long int SmartPay = 0;
    double EachRich = 0.01;
    long int EachSmart = 10000;
    for(int i = 0 ; i< 30 ; i++)
    {
        RichPay = RichPay + EachRich;
        EachRich = EachRich*2;
        SmartPay = SmartPay + EachSmart;
    }

    printf("%ld \n",SmartPay);
    printf("%ld",(long int)RichPay);
    return 0;
}
