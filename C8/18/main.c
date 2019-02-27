#include <stdio.h>
#include <stdlib.h>
#define size 51
int main()
{
    int temp;//计算中和每一位相乘所得的数
    int flag=0;//判断是否溢出
    int maxindex = 50;
    int n = 1;//乘数
    int index ;
    int result[size] = {0};
    int up = 0;
    result[maxindex]=1;
    printf("1!=%d \n",result[maxindex]);
    for(n = 2;n<=40;n++)
    {
        up =0;
        for(index = 50 ;index>=maxindex;index--)
        {
            if(up == 0)//没有进位的情况
            {
                up = result[index]*n/10;
                result[index] = result[index]*n%10;
            }
            else//有进位的情况
            {
                temp = (result[index]*n+up);
                result[index] = temp % 10;
                up = temp/10;
            }
            if(index == maxindex && up !=0)//最高位而且进位不为0 进行循环处理直到进位为0为止
            {
                while(up!=0)
                {
                    maxindex--;
                    if(maxindex<=1)
                    {
                        printf("overflew!");
                        flag = 1;
                        break;
                    }
                    result[maxindex] = up%10;
                    up/=10;
                }
                break;//由于已经是最高位，所以不能再进行循环直接退出
            }
        }
        if(flag == 1)
        {
            break;
        }
        printf("%d!= ",n);
        for(index = maxindex;index<=50 ;index++)
        {
            printf("%d",result[index]);
        }
        printf("\n");
    }
}
