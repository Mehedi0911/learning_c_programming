#include <stdio.h>

int main()
{
    // problem - 1
    //  printf("Recently I heard that you’ve achieved 95%% marks in your exam.\nThis is brilliant!\nI wish you’ll shine in your life!\tGood luck with all the barriers(/\\) in\nyour life.");

    // problem - 2
    // int a, b;
    // scanf("%d %d", &a, &b);
    // int sum = a + b;
    // int div = a - b;
    // int mul = a * b;
    // float vag = a * 1.0 / b;
    // printf("%d + %d = %d\n", a, b, sum);
    // printf("%d - %d = %d\n", a, b, div);
    // printf("%d * %d = %d\n", a, b, mul);
    // printf("%d / %d = %0.2f\n", a, b, vag);

    // problem - 3
    // int input;
    // scanf("%d", &input);
    // if (input > 0 && input % 2 == 0)
    // {
    //     printf("Even");
    // }
    // else if (input < 0)
    // {
    //     printf("Invalid");
    // }
    // else
    // {
    //     printf("Odd");
    // }

    // problem - 4

    // int num;
    // scanf("%d", &num);
    // if(num == 0) {
    //     printf("zero");
    // }
    // else if(num > 0)
    // {
    //     printf("positive");

    // } else {
    //     printf("negative");

    // }

    int money;
    scanf("%d", &money);
    if (money >= 10000)
    {
        printf("Gucci Bag\n");
        if (money >= 20000)
        {
            printf("Gucci Belt");
        }
    }
    else if (money >= 5000 && money < 10000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something");
    }

    return 0;
}