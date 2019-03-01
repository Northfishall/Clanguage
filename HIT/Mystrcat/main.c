#include <stdio.h>
#include <stdlib.h>
int main()
{
    int index ;
    int dsLength = 0 ;
    int srcLength = 0;
    char dsStr[100];
    char srcStr[100];
        //gets(dsStr);
        scanf("%s",dsStr);
        //gets(srcStr);
        scanf("%s",srcStr);
        while(dsStr[dsLength]!='\0')
        {
            dsLength++;
        }
        while(srcStr[srcLength]!='\0')
        {
            srcLength++;
        }
        for(index = 0 ; index<srcLength;index++)
        {
            dsStr[dsLength++]=srcStr[index];
        }
        dsStr[dsLength]='\0';
        puts(dsStr);
        for(index = 0;index<dsLength;index++)
            dsStr[index]='\0';
        for(index = 0;index<srcLength;index++)
            srcStr[index]='\0';
        srcLength = 0;
        dsLength = 0;
    return 0;
}
