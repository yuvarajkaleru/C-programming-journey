//Program to check if two numbers are equal and print 1 if equal otherwise print 0
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers:  ");
    scanf("%d %d",&a, &b);
    if(a == b) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}