#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyFather = 175;
    int boyMother = 162;
    int girlFater = 169;
    int girlMother =153;
    int boy ,girl;
    printf("Height of xiao ming:%d\n",(int)((boyFather+boyMother)*0.54) );
    printf("Height of xiao hong:%d\n",(int)((girlFater*0.923 +girlMother)/2));
    return 0;
}

