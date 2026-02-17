#include <stdio.h>

int main(void)
{
    printf("Hello from C on Apple Silicon!\n");

    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += 1;
        printf("Current value of sum : %d\n", sum);
    }
    printf("Sum of 1-10 : %d\n", sum);
    return 0;
}