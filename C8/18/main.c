#include <stdio.h>
#include <stdlib.h>
#define size 51
int main()
{
    int temp;//�����к�ÿһλ������õ���
    int flag=0;//�ж��Ƿ����
    int maxindex = 50;
    int n = 1;//����
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
            if(up == 0)//û�н�λ�����
            {
                up = result[index]*n/10;
                result[index] = result[index]*n%10;
            }
            else//�н�λ�����
            {
                temp = (result[index]*n+up);
                result[index] = temp % 10;
                up = temp/10;
            }
            if(index == maxindex && up !=0)//���λ���ҽ�λ��Ϊ0 ����ѭ������ֱ����λΪ0Ϊֹ
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
                break;//�����Ѿ������λ�����Բ����ٽ���ѭ��ֱ���˳�
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