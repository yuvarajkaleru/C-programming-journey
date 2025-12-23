//write a program to find sum of digits
#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("Enter the number to find sum of digits: ");
    scanf("%d",&n);
    while(n!=0){
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10 ;
    }
    printf("Sum is %d",sum);
}