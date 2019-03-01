#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 0;
    int indexfront;
    int indexback;
    char originData[201];
    char temp ;
    gets(originData);
    while(originData[length]!='\0')//求出字符串的长度
    {
        length++;
    }
    indexback = --length;
    indexfront = 0;
    while (indexback>indexfront)
    {
        temp = originData[indexfront];
        originData[indexfront] = originData[indexback];
        originData[indexback] = temp;
        indexback--;
        indexfront++;
    }
    puts(originData);
    return 0;
}
