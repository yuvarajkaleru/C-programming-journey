#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum;
    if (n == 0)
    {
        sum = 1;
    }

    while (n != 0)
    {
        n = n / 10;
        sum++;
    }

    printf("Number of digits: %d", sum);
}