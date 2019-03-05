#include <stdio.h>
#include <stdlib.h>

int main()
{
    char data;
    printf("Input simple:\n");
    scanf("%c",&data);
    if((data>='a'&&data<='z') || (data>='A' && data <='Z'))
    {
        printf("It is an English character.\n");
    }
    else if (data>='0' && data <='9')
    {
        printf("It is a digit character.\n");
    }
    else
        printf("It is other character.\n");
    return 0;
}
