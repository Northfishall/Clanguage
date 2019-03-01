#include <stdio.h>
#include <stdlib.h>

int main()
{
    int indexOutput;
    int indexResult=0, indexS;
    int lengthS ;
    char s[50];
    char a;
    char result [50];
    //scanf("%s",&s);
    gets(s);
    a = getchar();
    //scanf("%c",&a);
    //puts(s);


    for(lengthS=0;lengthS<50;lengthS++)
    {
        if(s[lengthS]=='\0')
        {
            break;
        }
    }
    //printf("%d\n",lengthS);
    for(indexS=0;indexS<lengthS;indexS++)
    {
        if(s[indexS]==a)
        {
            ;
        }
        else
        {
            result[indexResult++] = s[indexS];
        }
    }
    result[indexResult]='\0';
    indexResult--;
    //for(indexOutput=0;indexOutput<indexResult;indexOutput++)
    //{
    //    printf("%s",result[indexOutput]);
    //}
    puts(result);
    //printf("%s",s);
}
