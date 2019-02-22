#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag = 1;
    int sum = 0;
    int inputData;
    int randomFlag = rand();
    printf("Begin: %d \n", &sum);
    if (randomFlag % 2 == 0)
    {
        printf("Please input number:");
        while(flag == 1)
        {
            scanf("%d", &inputData);
            if(!(inputData-sum<=2 && inputData-sum>0))
            {
                flag = 1;
                printf("Wrong input please input a reasonable number \n");
            }
            else
            {
                sum = inputData;
                flag =0;
            }
        }
        flag = 1;
    }
    else
    {
        if((30-sum)%3==1)
        {
            sum+=1;
            printf("I think it should be %d \n",sum);
        }
        else
        {
            sum+=2;
            printf("I think it should be %d \n",sum);
        }
    }

    while (sum!=30)
    {
        if(sum>30)
            sum %= 30;
        if (randomFlag % 2 == 1)
        {
            printf("Please input number:");
            while(flag == 1)
            {
                scanf("%d", &inputData);
                if(!(inputData-sum<=2 && inputData-sum>0))
                {
                    flag = 1;
                    printf("Wrong input please input a reasonable number \n");
                }
                else
                {
                    sum = inputData;
                    flag =0;
                    if(sum == 30)
                    {
                        printf("computer lose!\n");
                        return 0;
                    }
                }
            }
            flag = 1;
            randomFlag++;
        }
        else
        {
            if((30-sum)%3==1)
            {
                sum+=1;
                printf("I think it should be %d \n",sum);
                if(sum==30)
                {
                    printf("player lose!\n");
                    break;
                }
            }
            else
            {
                sum+=2;
                printf("I think it should be %d \n",sum);
                if(sum==30)
                {
                    printf("player lose!\n");
                    break;
                }
            }
            randomFlag++;
        }

    }
    return 0;
}
