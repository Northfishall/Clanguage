#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temp ;
    int flag = 0;
    int i , j ;
    char data[200];
    int lengthData = 0;
    gets(data);
    while(lengthData<200 && data[lengthData]!='\0')
    {
        lengthData++;//获取字符串的长度
    }
    for(i = 0 ;i<lengthData ; i++)
    {
        for(int j = 0 ; j<lengthData-1 ; j++)
        {
            if(data[j]>data[j+1])
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1]= temp;
                flag =  1;
            }
        }
        if(flag == 0 )
            break;
        flag = 0;
    }
    puts(data);
    return 0;
}
