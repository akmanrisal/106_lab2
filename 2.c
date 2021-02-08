#include<stdio.h>
int main()
{
    float sum,all,min,sec;
    char ab;

    scanf("%c",&ab);
    fflush;
    scanf("%f",&sum);

    if(ab=='A')
    {
        if(sum>200)
        {
            min=199+((int)sum-200)*3;
            sec=((sum-(int)sum)/0.6)*3;
            printf("%.2f",min+sec);
        }
        else
            printf("199.00");
        }
    if(ab=='B')
    {
       if(sum>400)
        {
            min=299+((int)sum-400)*2;
            sec=((sum-(int)sum)/0.6)*2;
            printf("%.2f",min+sec);
        }
        else
            printf("299.00");
        }
    }



