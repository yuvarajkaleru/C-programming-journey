//write a program to find factorial of a number
#include<stdio.h>
int main(){
    int n;
    int fact = 1;
    printf("Enter the number to find factorial: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    printf("Factorial is %d",fact);
    return 0;
}