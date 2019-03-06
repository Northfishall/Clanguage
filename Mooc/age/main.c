#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 10;
    int ageList[10] = {0};
    int three , four;
    int index;
    int times;
    int flag;
    flag = 0;
    for(age = 10 ;age*age*age<9999;age++)
    {
        three = age*age*age;
        four = three*age;
        for(times = 0;times<4;times++)
        {
            index = three%10;
            three /=10;
            ageList[index]++;
        }
        for(times =0 ;times <6;times++)
        {
            index = four%10;
            four /=10;
            ageList[index]++;
        }
        for(index = 0;index<10;index++)
        {
            if(ageList[index]!=1)
            {
                flag = 2;
            }
            ageList[index]=0;
        }
        if(flag == 0)
        {
            printf("age=%d\n",age);
            return 0;
        }
        else if (flag == 2)
        {
            flag = 0;
        }
    }
    return 0;
}
