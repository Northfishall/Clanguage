#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    ����������:һ������������һ��İ����,İ��������̸��һ����Ǯ�ļƻ����üƻ�����:��ÿ�����10��Ԫ,���һ�����1��Ǯ,�ڶ���2��Ǯ,������4��Ǯ������

��������30���,�����̽����˶���Ǯ?İ���˽����˶���Ǯ?(ע��һ������Ԫ,һ���Ƿ�)

�����ʽҪ��: %ld ���,��λ��Ԫ
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