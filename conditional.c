#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    // if(tk >= 100)
    // {
    //     printf("Burger Khabo");
    // }else if(tk > 50 && tk < 100){
    //     printf("Cha khabo");
    // } else {
    //     printf("kichui khabo na");
    // }
    if (tk >= 5000)
    {
        if (tk >= 10000)
        {
            printf("Will Go to Makkah");
        }
        else
        {
            printf("Will Go Madinah");
        }
    }
    else
    {
        printf("Will Go to Dammam");
    }

    return 0;
}