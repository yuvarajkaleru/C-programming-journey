#include<stdio.h>
int main(){
    int n;
    printf("Enter the day number");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Monday");
        break;
        default: 
        printf("Today is not Monday");
    }
    return 0;
}