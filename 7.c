// write a program to check the number is palindrome or not
#include <stdio.h>
int main()
{
    int n;
    int rev;
    printf("Enter the number to check if it is palindrome or not: ");
    scanf("%d", &n);
    int temp = n;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (temp == rev)
    {
        printf("The number is a palindrome.");
    }
    else
    {
        printf("The number is not a palindrome.");
    }
}