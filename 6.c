// write a program to reverse a number
#include<stdio.h>
int main(){
    int n;
    int rev;
    printf("Enter the number to find sum of digits: ");
    scanf("%d",&n);
    while(n!=0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10 ;
    }
    printf("Sum is %d",rev);
}