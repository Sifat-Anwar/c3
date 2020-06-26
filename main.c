#include<stdio.h>


int main()


{
    float g;
    scanf("%f", &g);
    if(g < 0 || g > 100)
    {
        printf("out of Intervel");
    }

    else
    {


        if(g >= 0 && g <= 25)
        {
             printf("Interval [0,25]");
        }
        else if(g>25 && g<=50)
        {
             printf("Interval (25,50]");
        }

        else if(g>50 && g<=75)
       {
           printf("Intervel (50,75]");
       }
        else
        {
            printf("Intervel (75,100]");
        }

    }
    return 0;


}

