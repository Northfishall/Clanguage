#include <stdio.h>
#include <stdlib.h>
#define minHeart 75
int main()
{
    int birthYear;
    int thisYear;
    long unsigned  heart;
    heart = 0;
    printf("Input your birth year:");
    scanf("%d",&birthYear);
    printf("Input this year:");
    scanf("%d",&thisYear);

    for(;birthYear<thisYear;birthYear++)
    {
        if(birthYear%400==0 ||(birthYear%100!=0 && birthYear%4==0))
        {
            heart+=366*24*60*minHeart;
        }
        else
        {
            heart+=365*24*60*minHeart;
        }
    }
    printf("The heart beats in your life: %lu",heart);
    return 0;
}
