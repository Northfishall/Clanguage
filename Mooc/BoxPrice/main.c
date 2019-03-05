#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lvl;
    float weight;
    float price = 0;

    scanf("%d,%f",&lvl,&weight);
    if(lvl<0 || lvl >4)
    {
        printf("Error in Area\n");
        printf("Price: %5.2f\n",price);
        return 0;
    }
    switch(lvl)
    {
        case 0:
            price += 10;
            price += (int)weight*3;
            break;
        case 1:
            price += 10;
            price += (int)weight*4;
            break;
        case 2:
            price += 15;
            price += (int)weight*5;
            break;
        case 3:
            price += 15;
            price += (int)weight*6.5;
            break;
        case 4:
            price += 15;
            price += (int)weight*10;
            break;
        default :
        ;
    }
    printf("Price: %5.2f\n",price);
    return 0;
}
